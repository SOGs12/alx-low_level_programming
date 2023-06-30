#include "main.h"

/**
 * string_toupper - Change all lowercase to uppercase
 * @str: Pointer
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'Z')
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
