#include "main.h"
#include <stdio.h>
/**
 *rot13-a rot13  decoding function
 *@str: string input
 *
 *Return: rot13 decoded string
 */
char *rot13(char *str)
{
int i, j;
char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char decr13alph[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0 ; str[i] != '\0' ; i++)
{
for (j = 0 ; j < 52 ; j++)
{
if (str[i] == alph[j])
{
str[i] = decr13alph[j];
}
}
}
return (str);
}
