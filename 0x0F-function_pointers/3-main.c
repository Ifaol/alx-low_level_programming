#include "3-calc.h"
/**
 *main - a simple calculater function
 *@argc: no of arguments passed
 *@argv: string pointer input
 *
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *s;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
s = argv[2];
if ((get_op_func(s)) != NULL)
{
result = get_op_func(s)(num1, num2);
printf("%d\n", result);
}
else
{
printf("Error\n");
exit(99);
}
return (0);
}
