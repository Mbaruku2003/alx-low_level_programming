#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void close_elf(int elf);

/**
 * check_elf - This checks if a file is an ELF file
 * @c_ident: A pointer to an array containing ELF magic members
 * @Description: if the file isntan ELF file
 */
void chec_elf(unsigned char *c_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (c_ident[index] != 127 &&
				c_ident[index] != 'E' &&
				c_ident[index] != 'L' &&
				c_ident[index] != 'F')
				{
					dprintf(STDERR_FILENO, "Error Not an ELF file\n");
					exit(98);
				}
	}
}
/**
 * print_magic - Prints the magic numbers of an ELF header
 * @c_ident: A pointer to an array containing ELF magic numbers
 * @DEscription: magic numbers are separated by spaces
 */
void print_magic(unsigned char *c_ident)
{
	printf(" Class:			");
	switch (c_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", c_ident[ELCLASS]);
	}
}
/**
 * print_data - prints the data of an ELF header.
 * @c_ident: A pointer to an array containing the ELF class
 */
void print_data(unsigned char *c_ident)
{
	printf("	Data:				");
	switch (c_ident[EL_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", c_ident[EL_class]);
	}
}
/**
 * print_OS/ABI - prints the OS/ABI of an ELF header.
 * @c_ident: A pointer to an array containing the ELF version
 */
void print_OS/ABI(unsigned char *c_ident)
{
	printf("	OS/ABI:				");
	switch (c_ident[EL_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX _ HP=UX\n");
		case ELFOSABI_NETBSD:

