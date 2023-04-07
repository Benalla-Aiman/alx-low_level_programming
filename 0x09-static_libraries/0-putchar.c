#include <unistd.h>

/**
 * _putchar - Writes a character to standard output.
 * @c: The character to write.
 *
 * Return: If successful 1. Otherwise, a negative number.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
