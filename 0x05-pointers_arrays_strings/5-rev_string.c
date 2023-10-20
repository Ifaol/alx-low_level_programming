#include "main.h"
/**
 *rev_string-reverses a str
 *@s: pointer input to z funcS
 *Return:_strln func return str leng
 */
int _strlen(char *s);
void rev_string(char *s)
{
int i, j;
char temp;
i = 0;
j = _strlen(s) - 1;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
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
