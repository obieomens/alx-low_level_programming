#include "main.h"
/**
 * more_numbers - function that prints 0-10 numbers 14 times
 */
void more_numbers(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		char k;
		for (k = 0; k <= 14; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}

