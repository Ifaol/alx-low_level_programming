#include "main.h"
/**
 *puts_half-reverses a str
 *@str: pointer input to puts2 & _st
 *Return:_strln func return str leng
 */
int _strlen(char *str);
void puts_half(char *str)
{
int i, len, n1, n2;
len = _strlen(str);
if (len == 0)
{
_putchar('\n');
}
else if ((len % 2) == 0)
{
n1 = (len / 2);
for (i = n1 ; i < len ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
{
n2 = ((len - 1) / 2);
for (i = (n2 + 1) ; i < len ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
/**
 *_strlen-count no. of str
 *@str: pointer input to zs func
 *Return: No of char in str
 */
int _strlen(char *str)
{
int i, count = 0;
for (i = 0 ; str[i] != '\0' ; i++)
{
count++;
}
return (count);
}
