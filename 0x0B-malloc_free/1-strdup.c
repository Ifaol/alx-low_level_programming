#include "main.h"
/**
 *_strdup-str duplicater function with malloc
 *@str: input string
 *
 *Return: pointer to z duplicate str
 */
char *_strdup(char *str)
{
unsigned int i, c = 0, len;
char *arr;
if (str == NULL)
{
return (NULL);
}
for (i = 0 ; str[i] != '\0' ; i++)
{
c = c + 1;
}
len = c;
arr = (char *)malloc(len + 1);
if (arr == NULL)
{
return (NULL);
}
for (i = 0 ; i < len ; i++)
{
*(arr + i) = *(str + i);
}
*(arr + len) = '\0';
return (arr);
}
