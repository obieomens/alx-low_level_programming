#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_sum = n ^ m;
unsigned int count = 0;
	while (xor_sum > 0)
	{
		count += xor_sum & 1;
		xor_sum >>= 1;
	}
	return (count);
}
