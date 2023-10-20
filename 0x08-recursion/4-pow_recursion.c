#include "main.h"
/**
 *_pow_recursion-a x to y power function with recursion
 *@x: int input
 *@y: int input
 *
 *Return: power of input int x to y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
