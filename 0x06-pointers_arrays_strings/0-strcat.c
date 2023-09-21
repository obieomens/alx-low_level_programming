#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: destination of the strings
 * @src: source of strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int dest_lenth = 0;
int src_lenth = 0;
int i;
	for (i = 0; dest[i] != '\0'; i++)
		dest_lenth++;
	for (i = 0; src[i] != '\0'; i++)
		src_lenth++;
	for (i = 0; i <= src_lenth; i++)
		dest[dest_lenth + i] = src[i];
	return (dest);
}
