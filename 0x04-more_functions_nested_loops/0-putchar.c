#include "main.h"
/**
 * main-function starts here
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
char *str = "_putchar";
/* print string _putchar */
for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
