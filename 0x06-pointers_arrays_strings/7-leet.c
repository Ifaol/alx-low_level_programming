#include "main.h"
#include <stdio.h>
/**
 *leet-a 1337 decoding function
 *@str: string input
 *
 *Return: 1337 decoded string
 */
char *leet(char *str)
{
int i, j;
char decn[] = "4433007711";
char decl[] = "AaEeOoTtLl";
for (i = 0 ; str[i] != '\0' ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
if (str[i] == decl[j])
{
str[i] = decn[j];
}
}
}
return (str);
}
