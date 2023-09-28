#include "main.h"
/**
 * _prime - function that calculates the prime number
 * @a: takes an input
 * @b: takes an input
 * Return: result
 */
int _prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (_prime(a, b + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * @n: the integer to check
 * Return: 1 if number is a prime number
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

