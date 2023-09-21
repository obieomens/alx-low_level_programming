#include "main.h"
/**
 * leet - function that encods a string
 * @str: takes an input
 * Return: lee_str
 */
char *leet(char *str)
{
char *leet_str = str;
char *leet_map = "aAeEoOtTlL";
char *leet_code = "4433007711";
for (; *str; str++)
{
int i;
for (i = 0; leet_map[i]; i++)
{
if (*str == leet_map[i])
{
*str = leet_code[i];

}
}
}
return (leet_str);
}
