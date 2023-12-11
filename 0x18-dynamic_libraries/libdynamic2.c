#include "main.h"
/**
 *_isdigit-is upper function
 *
 *@c: is an input to this function
 *
 *Return: 1 for digits o else
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
/**
 *_strlen - a function that return a string's length
 *@s: pointer of a const char string input
 *
 *Return: string length
 */
int _strlen(char *s)
{
int i = 0;
size_t count = 0;
if (s == NULL)
{
return (count);
}
while (s[i] != '\0')
{
count++;
i++;
}
return (count);
}
/**
 *_puts - a function that writes a string to stdout
 *@s: a pointer to string
 *
 *Return: Void
 */
void _puts(char *s)
{
int j;
for (j = 0 ; ptr[j] != '\0' ; j++)
{
_putchar(ptr[j]);
}
}
/**
 *_strcpy - a custom strcpy function
 *@dest: a destination char pointer
 *@src: a source char pointer
 *
 *Return: char pointer of copied string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
if (src == NULL || dest == src)
{
return (dest);
}
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];
return (dest);
}
/**
*_atoi - a custom atoi function
*@s: char string input to be converted to int
*
*Return: converted string as an int
*/
int _atoi(char *s)
{
int num = 0, i = 0, sign = 1, start = 0;
if (src[0] == '-')
{
sign = -1;
start = 1;
}
for (i = start ; src[i] != '\0' ; i++)
{
if (src[i] >= '0' && src[i] <= '9')
{
num = (num * 10) + (src[i] - '0');
}
else
{
break;
}
}
return ((num)*(sign));
}
