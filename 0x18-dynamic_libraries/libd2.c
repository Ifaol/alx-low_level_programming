#include "main.h"
/**
*_strcat - a custom strcat function
*@dest: a destination char pointer
*@src: a sourse char pointer
*
*Return: concatenated string char pointer
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 *_strncat-concacate strings
 *@dest: destination string input
 *@src: source string input
 *@n: int input for strncat func
 *
 *Return: string pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, l;
l = _strlen(dest);
/* for loop to concacte */
for (i = 0 ; src[i] != '\0' && i < n ; i++)
{
dest[l + i] = src[i];
}
dest[l + i] = '\0';
return (dest);
}
/**
 *_strncpy-concacate strings
 *@dest: destination string input
 *@src: source string input
 *@n: int input for strncat func
 *
 *Return: string pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
if (src[i] != '\0')
{
dest[i] = src[i];
}
else
{
for ( ; i < n ; i++)
{
dest[i] = '\0';
}
}
}
return (dest);
}
/**
 *_strcmp-concacate strings
 *@s1: destination string input
 *@s2: source string input
 *
 *Return: string pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0 ; s1[i] != '\0' && s2[i] != '\0' ; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (s1[i] - s2[i]);
}
/**
*_memset - a custom memset function
*@s: buffer to be setted
*@b: char byte value that is setted
*@n: no of chars to be setted
*
*Return: setted char pointer of the strings
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *temp = s;
for (i = 0 ; i < n ; i++)
{
*s = b;
s++;
}
return (temp);
}
