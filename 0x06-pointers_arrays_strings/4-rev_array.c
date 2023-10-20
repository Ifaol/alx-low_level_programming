#include "main.h"
#include <stdio.h>
/**
 *reverse_array-reverse strings
 *@a: string input
 *@n: size of string input
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0 ; i < n / 2 ; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
