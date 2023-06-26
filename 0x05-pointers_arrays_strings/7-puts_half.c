#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 * Return: void
 */

void puts_half(char *str)

{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}

	if (j % 2 == 1)
	{
	k = j / 2;
	}
	else
	{
	k = (j + 1) / 2;
	}

	for (; str[k] != '\0'; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\ni');
}