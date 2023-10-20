#include "main.h"
/**
 * print_alphabet - function starts here
 *
 * Return: void
 */
void print_alphabet(void)
{
char ch;
/* print the alphabet from a to z in smallcase */
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
