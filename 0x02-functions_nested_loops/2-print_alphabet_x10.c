#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10-print the alphabet 10x
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
char ch;
int i;
/* print the alphabet 10x */
for (i = 0 ; i < 10 ; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
