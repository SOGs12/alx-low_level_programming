#include "main.h"

/**
 * string_toupper - Converts all lowercase character string to uppercase.
 * @n: The input string to be converted.
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
	if (n[i] >= 'a' && n[i] <= 'Z')
	n[i] -= 32;
	i++;
	}

	return (n);
}
