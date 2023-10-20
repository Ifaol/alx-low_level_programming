#include "main.h"
/**
 * _sqrt_recursion_helper - a helper function for _sqrt_recursion
 * @n: int input
 * @guess: current guess for square root of n
 *
 * Return: square root of int n
 */
int _sqrt_recursion_helper(int n, double guess)
{
double new_guess;
new_guess = (0.5 * (guess + n / guess));
if (new_guess == guess)
{
if ((int)new_guess * (int)new_guess == n)
{
return ((int)new_guess);
}
else
{
return (-1);
}
}
else
{
return (_sqrt_recursion_helper(n, new_guess));
}
}
/**
 * _sqrt_recursion - a square root function with recursion
 * @n: int input
 *
 * Return: square root of int n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_recursion_helper(n, n));
}
}
