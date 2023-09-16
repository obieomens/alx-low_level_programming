#include <stdio.h>
/**
 * main - program that prints a number from 1 to 100
 * Returns (0)
 */
int main (void)
{
	int i;
	int x;
	int y;

	for (i = 1; i < 100; i++)
	{
		x = i % 3;
		y = i % 5;

		if(x == 0 && y == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if(x == 0 && y != 0)
		{
			printf("%s ", "Fizz");
		}
		else if(x != 0 && y == 0){
			printf("%s ", "Buzz");
		} 
		else {
			printf("%d ", i);
		}
	}
	return (0);
}

