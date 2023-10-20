#include "main.h"
/**
 *_strcpy-reverses a str
 *@src: pointer input to z funcS
 *Return:_strln func return str leng
 */
int _strlen(char *src);
char *_strcpy(char *dest, char *src)
{
int i, j;
j = _strlen(src);
for (i = 0 ; i < j ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 *_strlen-count no. of str
 *@src: pointer input to zs func
 *Return: No of char in str
 */
int _strlen(char *src)
{
int i, count = 0;
for (i = 0 ; src[i] != '\0' ; i++)
{
count++;
}
return (count);
}
