#include "main.h"
/**
 *main-a print its name function
 *@argv: input string
 *@argc: input int
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
