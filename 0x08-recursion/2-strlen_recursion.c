#include "main.h"
/**
 *_strlen_recursion-custum strlen function with recursion
 *@s: string input
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
int c = 0;
if (*s == '\0')
{
return (c);
}
else
{
c = 1 + _strlen_recursion(s + 1);
}
return (c);
}
