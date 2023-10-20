#include "main.h"
/**
 *print_sign-a print sign function
 *
 *@n: is an input to this function
 *
 *Return: 1,-1 and 0 based on sign
 */
int print_sign(int n)
{
/* print sign and return 1,-1 and 0 accordingly */
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
