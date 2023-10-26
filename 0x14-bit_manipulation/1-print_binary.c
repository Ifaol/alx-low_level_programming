#include "main.h"
/**
 *print_binary - a function that print binary rep. of a number
 *@n: number input
 *
 *Return: the binary for of a number
 *
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
if (n & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
