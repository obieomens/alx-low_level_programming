#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints positive or negetive number
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is Positive", n);
}
else if (n == 0)
{
printf("%d is Zero", n);
}
else
{
printf("%d is Negative", n);
}
printf("\n");
return (0);
}
