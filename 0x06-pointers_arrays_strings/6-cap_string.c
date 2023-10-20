#include "main.h"
#include <stdio.h>
/**
 *cap_string- a to upper function
 *@str: string input to zs func
 *
 *Return: Words Of Str low -> up
 */
char *cap_string(char *str)
{
/* declaration of int i */
int i;
/* check the 1 charactor 4 small */
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = str[0] - 32;
}
/* for loop for the whole string */
for (i = 0 ; str[i] != '\0' ; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
/* switch for all cases */
switch (str[i - 1])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
str[i] = str[i] - 32;
break;
}
}
}
return (str);
}
