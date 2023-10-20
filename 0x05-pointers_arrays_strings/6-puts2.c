#include "main.h"
/**
 *puts2-reverses a str
 *@str: pointer input to puts2 & _st
 *Return:_strln func return str leng
 */
int _strlen(char *str);
void puts2(char *str)
{
int i, j;
i = 0;
j = _strlen(str);
for (i = 0 ; i < j ; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
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
