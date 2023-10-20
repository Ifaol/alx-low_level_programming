#include "main.h"
/**
 *print_last_digit-a print ld function
 *
 *@n: is an input to this function
 *
 *Return: The last digit of n
 */
int print_last_digit(int n)
{
int abs, num, final;
/* print the last digit of n */
if (n < 0)
{
abs = -n;
}
else
{
abs = n;
}
num = abs % 10;
final = num * 10 + num;
return final;
}
