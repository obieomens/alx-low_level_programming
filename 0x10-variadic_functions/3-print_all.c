
#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 * @...: Variable number of parameters representing values to print.
 *
 * Description: This function prints values based on the format string.
 * c: char, i: integer, f: float, s: char* (if NULL, print (nil) instead)
 * Any other char should be ignored. Prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(args, int));
	break;
	case 'i':
	printf("%d", va_arg(args, int));
	break;
	case 'f':
	printf("%f", (float)va_arg(args, double));
	break
	case 's':
	str = va_arg(args, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);
	break;
	}

	if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
	&& format[i + 1] != '\0')
	printf(", ");

	i++;
}

va_end(args);

printf("\n");
}
