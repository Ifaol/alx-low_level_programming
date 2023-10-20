#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
/* print from 'z' to 'a' */
for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
