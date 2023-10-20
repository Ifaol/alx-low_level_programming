#include "variadic_functions.h"
/**
 *print_strings - multiple strings printing with separator variadic function
 *@n: int input
 *@separator: char pointer input
 *
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;
va_start(args, n);
for (i = 0 ; i < n ; i++)
{
str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
