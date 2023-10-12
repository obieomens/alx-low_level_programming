#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings (or NULL)
 * @n: The number of strings passed to the function
 * @...: Variable number of parameters representing strings
 *
 * Description: This function prints a variable number of strings,
 * separated by the provided separator (if not NULL), and prints a new line.
 * If a string is NULL, it prints (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *current_str;

va_start(args, n);
	for (i = 0; i < n; i++)
	{
	current_str = va_arg(args, char *);
	if (current_str == NULL)
	{
	printf("(nil)");
	}
	else
	{
printf("%s", current_str);
	}

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
