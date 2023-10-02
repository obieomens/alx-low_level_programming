#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *num_str = argv[i];
int j = 0;
while (num_str[j] != '\0')
{
if (!(num_str[j] >= '0' && num_str[j] <= '9'))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(num_str);
}
printf("%d\n", sum);
return (0);
}
