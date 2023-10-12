#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers (or NULL)
 * @n: The number of integers passed to the function
 * @...: Variable number of parameters representing integers
 *
 * Description: This function prints a variable number of integers,
 * separated by the provided separator (if not NULL), and prints a new line.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
a_list args;
unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
}
	va_end(args);
	printf("\n");
}

