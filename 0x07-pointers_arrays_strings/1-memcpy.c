#include "main.h"
/**
 *_memcpy-a memset custom function
 *@dest: pointer to dest input
 *@src: pointer to src input
 *@n: unsigned int input
 *
 *Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptrs = src;
char *ptrd = dest;
for (i = 0 ; i < n ; i++)
{
*ptrd = *ptrs;
ptrs++;
ptrd++;
}
return (dest);
}
