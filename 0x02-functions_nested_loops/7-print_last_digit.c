#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: check parameter n
 * Return: m
 */
int print_last_digit(int n)
{
int m;
if (n < 0)
{
n = -n;
}
m = n % 10;
_putchar('0' + m);
return (m);
}
