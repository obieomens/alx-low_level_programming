#include "main.h"
/**
 * print_rev - function that prints a string, in reverse followed by a new line
 * @s: takes an input
 */
void print_rev(char *s)
{
int longp = 0;
int i;
	while (s[longp] != '\0')
	{
		longp++;
	}
	for (i = longp - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

