#include "main.h"
/**
 * _puts - function that prints a string followed by  a new line to stdout
 * @str: input string
 * Return: string
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		while (*str)
		{
		_putchar(*str);
		str++;
		}
	}
	_putchar('\n');
}

