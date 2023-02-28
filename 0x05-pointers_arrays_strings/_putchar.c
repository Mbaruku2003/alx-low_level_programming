# include <unistd.h>

/**
 * _putchar - writes the character c in stdout
 * @c: The character to print
 * Return:1 on success
 * on error, Return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c,1));
}	
