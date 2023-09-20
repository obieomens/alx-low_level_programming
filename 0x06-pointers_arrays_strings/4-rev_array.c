#include "main.h"
/**
 * reverse_array - function that reverses a string
 * @a: take an input
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int num;
int i;
	if (n < 1)
	return;
	for (i = 0; i < n / 2; i++)
	{
		num = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = num;
	}
}
