#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
char *duplicate_str;
unsigned int length;
unsigned int i;
if (str == NULL)
return (NULL);
for (length = 0; str[length] != '\0'; length++)
duplicate_str = malloc((length + 1) * sizeof(char));
if (duplicate_str == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate_str[i] = str[i];
return (duplicate_str);
}





