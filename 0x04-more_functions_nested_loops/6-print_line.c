#include "main.h"
/**
 * print_line - print a straight line
 * @n: input parameter
 * return: nothing
 */
void print_line(int n)
{
    if (n <= 0)
    
   _putchar('\n');
    
    else
    {
        int i;
        for (i = 1; 1 <= n; i++)
        _putchar(' ');
        _putchar('\n');
    }
}
