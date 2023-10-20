#include "main.h"
/**
 *str_concat-str concacate function with malloc
 *@s1: input string
 *@s2: input string
 *
 *Return: pointer to z concacated str
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, c1 = 0, c2 = 0;
char *str;
char emp_str[] = "";
if (s1 == NULL)
{
s1 = emp_str;
}
if (s2 == NULL)
{
s2 = emp_str;
}
for (i = 0 ; s1[i] != '\0' ; i++)
{
c1 = c1 + 1;
}
for (i = 0 ; s2[i] != '\0' ; i++)
{
c2 = c2 + 1;
}
str = (char *)malloc(c1 + c2  + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0 ; i < c1 + c2 ; i++)
{
if (i < c1)
{
*(str + i) = *(s1 + i);
}
else
{
*(str + i) = *(s2 + i - c1);
}
}
*(str + c1 + c2) = '\0';
return (str);
}
