#include "main.h"
/**
 * puts2 - funtion that prints every other character of a string
 * @str: input character
 */
void puts2(char *str)
{
int m = 0;
	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
