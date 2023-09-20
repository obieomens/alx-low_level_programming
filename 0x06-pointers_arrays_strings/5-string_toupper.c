#include "main.h"
/**
 * string_toupper - function that changes  lowercase string to upper
 * @str: takes an input string
 * Return: str
 */
char *string_toupper(char *str)
{
int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

