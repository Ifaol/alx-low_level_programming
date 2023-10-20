#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2, num3, num4;
/* print all the combination of 3 single numbers */
for (num1 = 0 ; num1 <= 9 ; num1++)
{
for (num2 = 0 ; num2 <= 9 ; num2++)
{
for (num3 = 0 ; num3 <= 9 ; num3++)
{
num4 = num1 * 100 + num2 * 10 + num3;
if (num1 < num2 && num2 < num3)
{
putchar('0' + num1);
putchar('0' + num2);
putchar('0' + num3);
if (num4 != 789)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
