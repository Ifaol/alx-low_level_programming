#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int num;
/* print numbers from '0' to '10' */
for (num = 0 ; num < 16 ; num++)
{
if (num < 10)
{
putchar('0' + num);
}
else
{
putchar('a' + num - 10);
}
}
putchar('\n');
return (0);
}
