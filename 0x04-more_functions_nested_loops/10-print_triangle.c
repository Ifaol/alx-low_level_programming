#include "main.h"
/**
 *print_triangle-triangle of # print function
 *@size: input int to the function
 */
void print_triangle(int size)
{
/* declaring int i,j and k */
int i, j, k;
/* checking if size <= 0 and act */
if (size <= 0)
{
_putchar('\n');
}
else
{
/* print # triangle */
for (i = 0 ; i < size ; i++)
{
for (j = i ; j < size - 1 ; j++)
{
_putchar(' ');
}
for (k = 0 ; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
