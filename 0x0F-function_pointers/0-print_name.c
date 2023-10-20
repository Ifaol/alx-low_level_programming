#include "function_pointers.h"
/**
 *print_name - name printer function that uses function pointer
 *@name: string pointer
 *@f: pointer to a function
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
else
{
return;
}
}
