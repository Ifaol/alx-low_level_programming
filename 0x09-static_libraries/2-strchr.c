#include "main.h"
/**
 *_strchr-a strchr custom function
 *@s: pointer input
 *@c: char input
 *
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
unsigned int i;
char *ptr = s;
for (i = 0 ; *ptr != '\0' ; i++)
{
if (*ptr == c)
{
return (ptr);
}
ptr++;
}
if (c == '\0')
{
return (ptr);
}
return (NULL);
}
