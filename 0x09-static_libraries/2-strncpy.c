#include "main.h"
#include <stdio.h>
/**
 *_strncpy-concacate strings
 *@dest: destination string input
 *@src: source string input
 *@n: int input for strncat func
 *
 *Return: string pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (src[i] != '\0')
{
dest[i] = src[i];
}
else
{
for ( ; i < n ; i++)
{
dest[i] = '\0';
}
}
}
return (dest);
}
