#include "main.h"
/**
 * print_diagonal - funtion that prints a diagonal
 * @n: input parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j = j + 1;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

