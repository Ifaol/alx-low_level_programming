#include "main.h"
/**
 *_strspn-a strchr custom function
 *@s: pointer input
 *@accept: char input
 *
 *Return: int of spn
 */
unsigned int _strspn(char *s, char *accept)
{
int c = 0, is_found;
char *ptr_span = s;
char *ptr_set = accept; 
while (*ptr_span != '\0')
{
ptr_set = accept;
is_found = 0;
while (*ptr_set != '\0')
{
if (*ptr_set == *ptr_span)
{
c = c + 1;
is_found = 1;
break;
}
ptr_set++;
}
if (is_found = 1)
{
ptr_span++;
}
else
{
break;
}
}
return (c);
}
