#include "main.h"
#include <unistd.h>
/** print_numbers - function that prints numbers 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
