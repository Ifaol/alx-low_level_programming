#include "variadic_functions.h"
/**
 *sum_them_all - multiple numbers adding variadic function
 *@n: int input
 *
 *Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, num, sum = 0;
va_list args;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
num = va_arg(args, unsigned int);
sum = sum + num;
}
va_end(args);
return (sum);
}
