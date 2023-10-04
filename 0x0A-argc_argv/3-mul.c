#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}

