#include "main.h"
/**
 *_strlen-a custom strlen function
 *@src: string pointer input
 *
 *Return: int string length
 */
unsigned int _strlen(char *src)
{
unsigned int i, c = 0;
for (i = 0 ; src[i] != '\0' ; i++)
{
c = c + 1;
}
return (c);
}
#include "main.h"
/**
 *string_nconcat-a string n concacate function
 *@s1: string 1 input
 *@s2: string 2 input
 *@n: int input
 *
 *Return: pointer to concacated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len, c1, c2;
char *ptr = NULL;
char emp[] = "";
if (s1 == NULL)
{
s1 = emp;
}
if (s2 == NULL)
{
s2 = emp;
}
c1 = _strlen(s1);
c2 = _strlen(s2);
if (n >= c2)
{
len = c2;
}
else
{
len = n;
}
ptr = malloc((sizeof(char)) * (c1 + len + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < (c1 + len) ; i++)
{
if (i < c1)
{
ptr[i] = s1[i];
}
else
{
ptr[i] = s2[i - c1];
}
}
ptr[i] = '\0';
return (ptr);
}
