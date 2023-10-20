#include "main.h"
#include <stdio.h>
/**
 *main-1-100 fizzbuzz print function
 *Return: Always 0 (success)
 */
int main(void)
{
/* declaring int i */
int i;
/* for loop to print 1-100 fizbuz */
for (i = 1 ; i <= 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
while (i != 100)
{
putchar(' ');
break;
}
}
putchar('\n');
return (0);
}
