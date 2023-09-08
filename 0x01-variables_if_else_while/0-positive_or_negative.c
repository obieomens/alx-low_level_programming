#include <stdlib.h>
#include <time.h>
#inlude < stdio.h >
/**
 * main - function
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is Positive", n);
else if (n == 0)
printf("%d is Zero", n);
else if (n < 0)
printf("%d is Negative", n);
printf("\n");
return (0);
}
