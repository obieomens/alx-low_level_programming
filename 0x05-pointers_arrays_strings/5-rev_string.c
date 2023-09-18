#include "main.h"
/**
 * rev_string - function that reverses a string
 *@s: takes an input
 */
void rev_string(char *s)
{
int longp = 0;
int i;
int len;
	while (s[longp] != '\0')
	{
		longp++;
	}
	for (i = 0; i < longp / 2; i++)
	{
		len = s[i];
		s[i] = s[longp - i - 1];
		s[longp - i - 1] = len;
	}
}
