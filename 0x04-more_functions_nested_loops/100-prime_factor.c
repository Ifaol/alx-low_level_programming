#include <stdio.h>
#include <inttypes.h>
/**
 *main-function starts here
 *
 *Return: Always 0 (success)
 */
int main(void)
{
/* initialize n and i */
int64_t n = 612852475143;
int64_t i = 2;
/* while loop to keep i in possible range */
while (i * i <= n)
{
/* check if n is divisible by i */
if (n % i == 0)
{
n /= i;
}
else
{
i++;
}
}
printf("%" PRId64 "\n", n);
return 0;
}
