#include "main.h"
/**
 * leet: function that encode a string into 1337
 * @str: input string
 * Return: return a pointer to encoded string
 */
char *leet(char *str)
{
int i;
int k;
char s1[]  = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (k = 0; k < 10; k++)
{
if (str[i] == s1[k])
{
str[i] = s2[k];
}
}
}

return (str);
}
