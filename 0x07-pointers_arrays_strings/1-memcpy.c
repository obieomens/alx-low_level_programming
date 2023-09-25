#include "main.h"
/**
 * _memcpy - function that copies pointer from memory area src to dest
 * @dest: memory to be copied
 * @src: memory copied
 * @n: number of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
