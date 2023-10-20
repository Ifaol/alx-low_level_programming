#include "main.h"
/**
 *print_numbers-a 0-9 print function
 */
void print_numbers(void)
{
/* declaration of  int 'i' */
int i;
/* for loop to print '0' to '9' */
for (i = 0 ; i <= 9 ; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
