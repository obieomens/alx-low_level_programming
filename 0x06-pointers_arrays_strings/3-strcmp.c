#include "main.h"
/**
 * _strcmp - funtion that compares two strings
 * @s1: first sting
 * @s2: second string
 * Return: if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
		while (s1[i] && s2[i] && s1[i] == s2[i])
			i++;

	return (s1[i] - s2[i]);
}
