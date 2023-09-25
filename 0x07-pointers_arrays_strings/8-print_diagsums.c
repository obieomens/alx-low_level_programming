#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -prints the sum of the two diagonals of a square matrix
 * @a: takes an input
 * @size: takes an input
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int k;
if (size <= 0)
	return;
for (k = 0; k < size; k++)
{
sum1 += a[k * size + k];
}
for (k = 0; k < size; k++)
{
sum2 += a[k * size + (size - 1 - k)];
}
printf("%d,", sum1);
	printf("% d\n", sum2);
}

