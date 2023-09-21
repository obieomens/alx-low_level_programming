#include "main.h"
/**
 * leet: function that encode a string into "1337"
 * @str: input string to be encoded
 * Return:a pointer to encoded string
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
break;
}
}
}
return (leet_str);
}
