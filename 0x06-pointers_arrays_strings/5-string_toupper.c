#include "main.h"
/**
 * string_toupper - function that changes lowercase letter string to uppercase
 * @str: the input string
 * Return: return a pointer to a modified string
 */
char *string_toupper(char *str)
{
int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

