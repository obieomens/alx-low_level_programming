#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: takes the first string input
 * @src: takes the second string input
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int first_len;
int second_len;
int i;
	for (first_len = 0; dest[first_len] != '\0'; first_len++)
	{
	}
	for (second_len = 0; src[second_len] != '\0'; second_len++)
	{
	}
	for (i = 0; i <= first_len; i++)
		dest[first_len + i] = src[i];
	return (dest);
}
