#include "main.h"
/**
 *_isalpha-isalpha function
 *
 *@c: is an input to this function
 *
 *Return: 1 if success and 0 else
 */
int _isalpha(int c)
{
/* print 1 if lowercase & 0 else */
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
