#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @c: the string to search in
 * @s: the charcter to locate
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
