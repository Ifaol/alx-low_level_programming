#include "main.h"
/**
 *_strlen-count no. of str
 *@s: pointer input to zs func
 *Return: No of char in str
 */
int _strlen(char *s)
{
int i, count = 0;
for (i = 0 ; s[i] != '\0' ; i++)
{
count++;
}
return (count);
}
