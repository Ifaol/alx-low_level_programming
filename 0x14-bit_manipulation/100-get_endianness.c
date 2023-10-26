#include "main.h"
/**
 *get_endianness - a function that checks the endianness
 *
 *Return: 1 for little endian and 0 for big endian
 */
int get_endianness(void)
{
unsigned int num = 1;
char *byte_ptr = (char *)&num;
if (*byte_ptr == 1)
{
return (1);
}
else
{
return (0);
}
}
