#include "main.h"
/**
 * print_to_98 - print natural numbers
 * Return: 0
 */
void print_to_98(int n)
{
do {
_putchar(n);
if (n != 98)
{
	_putchar(',');
	_putchar(' ');
}
}
	while (n <= 98);
}

