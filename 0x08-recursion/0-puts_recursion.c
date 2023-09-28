#include "main.h"
/**
 * _puts_recursion - funtion that prints a string
 * @s: takes input string
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
