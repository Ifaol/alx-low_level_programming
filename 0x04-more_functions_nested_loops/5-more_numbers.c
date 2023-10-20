#include "main.h"
/**
 *more_numbers-a 0-14 10x print function
 */
void more_numbers(void)
{
/* declaration of  int 'i' and char  */
int n, i;
char numbers[] = "01234567891011121314\n";
/* for loop to print 10x */
for (n = 0 ; n <= 9 ; n++)
{
i = 0;
while (numbers[i] != '\0')
{
_putchar(numbers[i]);
i++;
}
}
}
