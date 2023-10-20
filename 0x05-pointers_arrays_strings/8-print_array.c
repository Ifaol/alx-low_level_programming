#include "main.h"
/**
 *print_array-prints arrey func.
 *@a: pointer input to func
 *@n: int input to z func
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
printf("\n");
}
else
{
for (i = 0 ; i < n ; i++)
{
if (i != (n - 1))
{
printf("%d", a[i]);
printf(", ");
}
else
{
printf("%d\n", a[i]);
}
}
}
}
