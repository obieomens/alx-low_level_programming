#include "main.h"
/**
 * swap - function that swaps the values of two integers.
 * @a:first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;
	
	m = *a;
	*a = *b;
	*b = m;
	
}
	
