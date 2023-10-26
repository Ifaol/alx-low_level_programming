#include "main.h"
/**
 *binary_to_uint - a function that convert binary to unit
 *@b: a pointer to string input containing 0s and 1s
 *
 *Return: converted unit number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;
if (b == NULL)
{
return (0);
}
for (i = 0 ; b[i] != '\0' ; i++)
{
if (b[i] != '1' && b[i] != '0')
{
return (0);
}
result = result << 1;
result = result | (b[i] - '0');
}
return (result);
}
