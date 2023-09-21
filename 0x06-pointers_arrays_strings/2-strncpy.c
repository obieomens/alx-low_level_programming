#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest : input string
 * @src: input string
 * @n: number of string to copy
 * Return: dest char pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
