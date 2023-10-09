#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string is composed of digits
 * @str: The input string
 * Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * multiply - Multiply two positive numbers
 * @n1: First number
 * @n2: Second number
 *
 * Return: Result of multiplication
 */
int multiply(int n1, int n2)
{

return (n1 * n2);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");

return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}

