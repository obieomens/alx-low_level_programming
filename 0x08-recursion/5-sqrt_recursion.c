#include "main.h"
/**
 * _sqrt - function that returns the natural square root of a number
 * @n: the number to calculate the square root of
 * @x: the unknown number
 * _sqrt_recursion - calculates the square
 * Return: result
 */
int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
	return (_sqrt(n, x + 1));
	}
}
/**
 * _sqrt_recursion - Wrapper function for _sqrt_recursive
 * @n: the number to calculate the square root
 * Return: the sqare root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt(n, 1));
}

