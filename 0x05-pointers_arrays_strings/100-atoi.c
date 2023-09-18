#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: takes an input
 * Return: always 0
 */
int _atoi(char *s)
{
	int m = 0;
	unsigned int ni = 0;
	int min = 1;
	int isr = 0;

	while (s[m])
	{
		if (s[m] == 45)
		{
			min *= -1;
		}
		while (s[m] >= 48 && s[m] <= 57)
		{
			isr = 1;
		ni = (ni * 10) + (s[m] - '0');
		m++;
		}
		if (isr == 1)
		{
			break;
	}
	m++;
}
ni *= min;
return (ni);
}


