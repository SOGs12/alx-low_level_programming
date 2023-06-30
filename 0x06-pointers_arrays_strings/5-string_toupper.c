#include "main.h"

/**
 * string_toupper - Converts all lowercase character string to uppercase.
 * @n: The input string to be converted.
 * Return: The converted string.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
		{
			n[i] = n[i] - 32; ('a' - 'Z)
		}
		i++;
	}

	return (n);
}