#include "main.h"
/**
 *set_bit - a function that set a bit value to 1 at index
 *@n: a pointer to number input to be setted
 *@index: index at number to be setted
 *
 *Return: 1 if sucsessful and -1 else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
unsigned int max_index;
max_index = sizeof(unsigned int) * 8;
if (index >= max_index || n == NULL)
{
return (-1);
}
mask = 1UL << index;
*n = *n | mask;
return (1);
}
