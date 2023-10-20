#include "main.h"
/**
 *print_diagonal-Nx \ print function
 *@n: input int to the function
 */
void print_diagonal(int n)
{
/* declaring int i and n */
int i, s;
/* checking if n <= 0 and act */
if (n <= 0)
{
_putchar('\n');
}
else
{
/* print \ Nx */
for (i = 0 ; i < n ; i++)
{
for (s = 0 ; s < i ; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
