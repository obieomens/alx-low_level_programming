#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: check the parameter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
