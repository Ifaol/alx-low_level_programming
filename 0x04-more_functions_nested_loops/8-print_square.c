#include "main.h"
/**
 *print_square-Nx \ print function
 *@size: input int to the function
 */
void print_square(int size)
{
/* declaring int i and int j */
int i, j;
/* checking if size <= 0 and act */
if (size <= 0)
{
_putchar('\n');
}
else
{
/* print # squere */
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
