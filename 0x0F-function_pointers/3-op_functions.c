#include "3-calc.h"
/**
 *op_add - adding function
 *@a: int input
 *@b: int input
 *
 *Return: int addition
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - subtracting function
 *@a: int input
 *@b: int input
 *
 *Return: int subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - multipling function
 *@a: int input
 *@b: int input
 *
 *Return: int multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - division function
 *@a: int input
 *@b: int input
 *
 *Return: int division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 *op_mod - reminder function
 *@a: int input
 *@b: int input
 *
 *Return: int remainder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
