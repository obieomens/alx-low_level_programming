#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers
 * @n: check parameter
 * Return: 0
 */
void print_to_98(int n)
{
do {
if (n != 98)
{
	printf("%d, ", n);
}
else
{
	printf("%d \n", n);
}
n = n + 1;
}
	while (n <= 98);
}

