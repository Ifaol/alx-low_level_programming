#include "main.h"
/**
 *malloc_checked-a memory allocater function
 *@b: int input
 *
 *Return: Void
 */
void *malloc_checked(unsigned int b)
{
void *ptr = NULL;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
