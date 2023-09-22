#include "main.h"
/**
 * rot13 - function that encodes a string
 * @str: input string
 * Return: string
 */
char *rot13(char *str)
{
int i;
int k;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWZYZABCDDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; c[k] != '\0'; k++)
		{
			if (str[i] == c[k])
			{
				str[i] = d[k];
				break;
			}
		}
	}
	return (str);
}
