#include <stdio.h>
#include <stdlib.h>
#include "main.h" 

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = calloc(nmemb, size);
if (ptr == NULL)
{
_putchar(stderr, 'Error: calloc failed\n');
exit(EXIT_FAILURE);
}
return (ptr);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
_putchar('0x%02x', buffer[i]);
i++;
}
_putchar('\n');
}

