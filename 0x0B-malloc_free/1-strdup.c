#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
char *duplicate;
if (str == NULL)
{
return (NULL);
}
duplicate = (char *)malloc(strlen(str) + 1);
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}

















