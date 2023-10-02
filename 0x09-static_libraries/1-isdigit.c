#include "main.h"
/**
 * _isdigit.c - write a function that checks for a digit
 * @c: check code
 * Return: 1 and 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
