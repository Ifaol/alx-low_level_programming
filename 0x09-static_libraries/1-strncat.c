#include "main.h"
#include <stdio.h>
/**
 *_strlen-count no. of str
 *@dest: pointer input to zs func
 *
 *Return: No of char in str
 */
int _strlen(char *dest)
{
/* initialize and declare i,count */
int i, count;
count = 0;
/* for loop to count */
for (i = 0 ; dest[i] != '\0' ; i++)
{
count++;
}
return (count);
}
#include "main.h"
#include <stdio.h>
/**
 *_strncat-concacate strings
 *@dest: destination string input
 *@src: source string input
 *@n: int input for strncat func
 *
 *Return: string pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
/* initialize i and l */
int i, l;
l = _strlen(dest);
/* for loop to concacte */
for (i = 0 ; src[i] != '\0' && i < n ; i++)
{
dest[l + i] = src[i];
}
dest[l + i] = '\0';
return (dest);
}
