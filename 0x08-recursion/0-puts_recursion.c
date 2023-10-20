#include "main.h"
/**
 *_puts_recursion-custum puts func
 *@s: string input
 *
 *Return: Void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
