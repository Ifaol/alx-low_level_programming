#include "variadic_functions.h"
/**
 *print_all_string - print all helper function for string case
 *@s: input string
 *
 *Return: void
 */
void print_all_string(char *s)
{
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}
#include "variadic_functions.h"
/**
 *print_all - char,int,float,string printing variadic function
 *@format: char string input
 *
 *Return: Void
 */
void print_all(const char * const format, ...)
{
int i, index = 0, count = 0;
char *s, c, current_type;
float f;
va_list args;
va_start(args, format);
while (format != NULL && format[index] != '\0')
{
current_type = format[index];
while (index != 0 && index == count)
{
printf(", ");
break;
}
count = index;
switch (current_type)
{
case 'c':
c = (char) va_arg(args, int);
printf("%c", c);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = (float) va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
print_all_string(s);
break;
default:
count++;
}
count++;
index++;
}
va_end(args);
printf("\n");
}
