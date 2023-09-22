#include "main.h"
/**
 * rot13 - function that encodes a string
 * @s: input string
 * Return: string
 */
char *rot13(char *s)
{
int i;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWZYZABCDDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *ptr = s;
while (*s)
{
	for (i = 0; i <= 52; i++)
	{
		
	if (*s == c[i])
			{
				*s = d[i];
				break;
			}
		}
	s++;
	}
	return (ptr);
}
