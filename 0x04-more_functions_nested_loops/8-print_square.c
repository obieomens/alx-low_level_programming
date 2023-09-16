#include "main.h"
/**
 * print_square - function that prints a square
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(1);
		for (i = 0; i < size; i++)
		{
			_putchar(i);
			while (j < size)
			{
				_putchar('#');
				j = j + 1;
			}
		}
	}
}
