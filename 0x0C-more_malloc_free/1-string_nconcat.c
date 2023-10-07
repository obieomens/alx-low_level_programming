#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string (s1 + s2), or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *result;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
for (len2 = 0; s2[len2] != '\0'; len2++)
result = malloc((len1 + n + 1) * sizeof(char));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < n && s2[j] != '\0'; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
