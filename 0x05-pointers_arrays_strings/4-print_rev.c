#include "main.h"

/**
 * print_rev - inprint on reversa
 * @s: string
 * Return: 0
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
