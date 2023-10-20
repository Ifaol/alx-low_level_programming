#include "main.h"
/**
 *print_rev-print str in reverse
 *@s: pointer input to zs func
 *Return:_strln func return str leng
 */
int _strlen(char *s);
void print_rev(char *s)
{
int i, len;
char rev[1000];
len = _strlen(s);
for (i = 0 ; i < len ; i++)
{
rev[i] = s[len - 1 - i];
}
rev[len] = '\0';
for (i = 0 ; i < len ; i++)
{
_putchar(rev[i]);
}
_putchar('\n');
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
