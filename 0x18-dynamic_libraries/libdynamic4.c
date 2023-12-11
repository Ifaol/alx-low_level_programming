#include "main.h"
/**
 *_memcpy-a memset custom function
 *@dest: pointer to dest input
 *@src: pointer to src input
 *@n: unsigned int input
 *
 *Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *ptrs = src;
char *ptrd = dest;
for (i = 0 ; i < n ; i++)
{
*ptrd = *ptrs;
ptrs++;
ptrd++;
}
return (dest);
}
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
/**
 *_strspn-a strchr custom function
 *@s: pointer input
 *@accept: char input
 *
 *Return: int of spn
 */
unsigned int _strspn(char *s, char *accept)
{
int is_found;
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
if (is_found == 1)
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
/**
 *_strpbrk - a custom strpbrk function
 *@s: pointer to a string input
 *@accept: pointer input to brk
 *
 *Return: a nnew pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
}
/**
 *_strstr - a custom strstr function
 *@haystack: pointer to string input
 *@needle: pointer to string input
 *
 *Return: pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
}
