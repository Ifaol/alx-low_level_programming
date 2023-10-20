#include "main.h"
#include <stdlib.h>
/**
 *main-a print its name function
 *@argv: input string
 *@argc: input int
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[3])
{
int mul;
if (argc != 3)
{
printf("Error\n");
return (1);
}
mul = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", mul);
return (0);
}
