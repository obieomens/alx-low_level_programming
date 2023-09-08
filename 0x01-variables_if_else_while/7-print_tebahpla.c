#include <stdio.h>
/**
 * main - print all the numbers in base 16 on lowercase
 * Return: 0
 */
int main(void)
{
int n = 122;
	while (n >= 97)
{
	putchar(n);
	n--;
}
putchar('\n');
return (0);
}
