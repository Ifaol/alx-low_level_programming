#include <stdio.h>

/**
 *main-causes an infinite loop
 *Return: Alwys 0 (success)
 */

int main(void)
{
int i;/* we have an int i */

printf("Infinite loop incoming :(\n");

i = 0;
/*
 *while (i < 10)
 *{
 *putchar(i);
 *}
 */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
