#include <stdio.h>
/**
 * main - program that prints from 0-9
 * Return: 0
 */
int main(void)
{
int n;
	for (n = 0; n <= 9; n++)
{
	putchar(n + 48);
}
putchar('\n');
return (0);
}
