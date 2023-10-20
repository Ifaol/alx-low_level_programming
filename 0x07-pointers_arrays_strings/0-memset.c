#include "main.h"
/**
 *_memset-a memset custom function
 *@s: pointer input
 *@b: char input
 *@n: unsigned int input
 *
 *Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *ptr = s;
for (i = 0 ; i < n ; i++)
{
*ptr = b;
ptr++;
}
return (s);
}
