#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
void check_stat(int stat, int fd, char *filename, char mode);
/**
 * main - entry point of the program
 * @argc: the arguenment count
 * @argv: the arguenments already passed
 * Return: 1 on success else exit
 */
int main(int argc, char *argv[])
{
	int src, dest, m_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_stat(dest, -1, argv[2], 'W');
	while (m_read == 1024)
	{
		m_read = read(src, buffer, sizeof(buffer));
		if (m_read == -1)
			check_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, m_read);
		if (wrote == -1)
			check_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_stat - checks if afile can be opened or closed
 * @stat: new file file descriptor
 * @filename: the files name
 * @mode: closing or opwning
 * @fd: file descriptor
 */
void check_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", filename);
		exit(99);
	}
}
