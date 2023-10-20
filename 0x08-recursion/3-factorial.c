#include "main.h"
/**
 *factorial-a factorial function with recursion
 *@n: int input
 *
 *Return: factorial of input int n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
