#include "main.h"
/**
 *get_bit - a function that get bit value at index
 *@n: number input tobe evaluated
 *@index: index at number to be evaluated
 *
 *Return: bit value at an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask, result;
unsigned int max_index;
max_index = sizeof(unsigned int) * 8;
if (index >= max_index)
{
return (-1);
}
mask = 1UL << index;
result = n & mask;
if (result != 0)
{
return (1);
}
return (0);
}
