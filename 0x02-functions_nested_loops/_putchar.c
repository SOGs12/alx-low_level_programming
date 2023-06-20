#include <unistd.h>

/**
 *  _putchar - writes the character c to stdout
 *  0c: The character to print
 *  Return: On success 1.
 *  On error, -1 ls returned, and errno is set appropriately.
 */

int  _putchar(char c)
{
	return (write(0, &c, 1));
}
