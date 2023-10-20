#include "main.h"
/**
 *_atoi-return only nums from a str
 *@s: pointer input to z funcS
 *Return:_strln func return str leng
 */
int _strlen(char *s);
int _atoi(char *s)
{
int i, j;
j = _strlen(s);
char* out[j];
for (i = 0 ; i < j ; i++)
{
if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+')
{
out[i] = s[i];
}
}
out[i] = '\0';
_putchar('\n');
return (out);
}
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
