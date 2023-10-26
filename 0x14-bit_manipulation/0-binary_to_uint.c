#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to the string of 0 and 1
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
	res = (res * 2) + (*b - '0');
	b++;
	}
	return (res);
}
