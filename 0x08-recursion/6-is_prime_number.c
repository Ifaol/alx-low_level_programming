#include "main.h"
/**
 *is_prime_number_helper-recursive prime number identifier function
 *@n: int input,the number to be identified
 *@div: int input,divisibility chekers
 *
 *Return: 1 if prime and 0 for else
 */
int is_prime_number_helper(int n, int div)
{
if ((div * div) > n)
{
return (1);
}
if (n % div == 0)
{
return (0);
}
else
{
return (is_prime_number_helper(n, (div + 1)));
}
}
#include "main.h"
/**
 *is_prime_number-a primality checker function
 *@n: int input
 *
 *Return: 1 if prime input 0 else
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
else if (n == 2)
{
return (1);
}
else
{
return (is_prime_number_helper(n, 2));
}
}
