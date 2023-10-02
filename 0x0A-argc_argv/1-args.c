#include <stdio.h>
/**
 * main - prints new name and newline
 * @argc: number of command line arguments
 * @argv: array that contains the command line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
