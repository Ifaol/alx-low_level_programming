#include "main.h"
/**
 *is_palindrome_helper-palindrome identifier func
 *@s: string input
 *@first: input int
 *@last: input int
 *
 *Return: 1 for palindrome and 0 for else
 */
int is_palindrome_helper(char *s, int first, int last)
{
if (last >= first)
{
if (s[first] != s[last])
{
return (0);
}
else
{
return (is_palindrome_helper(s, first + 1, last - 1));
}
}
return (1);
}
#include "main.h"
/**
 *_strlen-a custom strlen function
 *@s: string input
 *@c: int input
 *
 *Return: string length
 */
int _strlen(char *s, int c)
{
if (*s == '\0')
{
return (c);
}
return (_strlen(s + 1, c + 1));
}
#include "main.h"
#include <string.h>
/**
 *is_palindrome-a palindrome identifier function with recursion
 *@s: string input
 *
 *Return: 1 if string is palindrome and 0 for else
 */
int is_palindrome(char *s)
{
int l;
l = _strlen(s, 0);
if (l <= 1)
{
return (1);
}
else
{
return (is_palindrome_helper(s, 0, l - 1));
}
}
