#include "main.h"
/**
 *print_most_numbers-a 0-9 except 2 and 4 print function
 */
void print_most_numbers(void)
{
/* declaration of  int 'i' */
int i;
/* for loop to print '0' to '9' execpt 2 and 4 */
for (i = 0 ; i <= 9 ; i++)
{
/* excluding 2 and 4 */
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
}
_putchar('\n');
}
