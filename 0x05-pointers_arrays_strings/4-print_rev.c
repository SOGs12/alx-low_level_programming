#include "main.h"

/**
 * print_rev - Prints a string in reversa
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int longi = 0;

	while (s[longi] != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (longi -= 1; longi >= 0; longi--)
	{
		_putchar(s[longi]);
	}
	_putchar('\n');
}
