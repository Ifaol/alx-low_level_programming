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
for (num = 0 ; num < 10 ; num++)
{
putchar('0' + num);
}
putchar('\n');
return (0);
}
