#include "main.h"
/**
 *_putchar - a custom putchar function
 *@char_to_be_written: char input
 *
 *Return: no of chars written
 */
int _putchar(char char_to_be_written)
{
if (write(1, &char_to_be_written, 1) == -1)
{
return ((char)(-1));
}
return (char_to_be_written);
}
/**
 *_islower-islower function
 *
 *@c: is an input to this function
 *
 *Return: Void
 */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
/**
 *_isalpha-isalpha function
 *
 *@c: is an input to this function
 *
 *Return: 1 if success and 0 else
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 *_abs-a print absV function
 *
 *@n: is an input to this function
 *
 *Return: The abs V of n
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
/**
 *_isupper-is upper function
 *
 *@c: is an input to this function
 *
 *Return: Void
 */
int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
