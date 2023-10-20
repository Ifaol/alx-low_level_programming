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
*_strcat-concacate strings
*@dest: destination string input
*@src: source string input
*
*Return: string pointer to dest
*/
char *_strcat(char *dest, char *src)
{
/* initialize and declaring i,l,n */
int i, l, n;
n = 0;
l = _strlen(dest);
/* for loop to fill dest */
for (i = l ; src[n] != '\0' ; i++)
{
dest[i] = src[n];
n++;
}
dest[i] = '\0';
return (dest);
}
