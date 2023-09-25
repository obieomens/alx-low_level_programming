#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: takes an array
 * Return: always return 0
 */
void print_chessboard(char (*a)[8])
{
int i;
int m;
for (i = 0; i < 8; i++)
{
	for (m = 0; m < 8; m++)
	_putchar(a[i][m]);
	_putchar('\n');
}
}

