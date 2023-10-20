#include "main.h"
/**
 *main-a print its name function
 *@argv: input string
 *@argc: input int
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
const char *programeName;
(void)argc;
programeName = argv[0];
printf("%s\n", programeName);
return (0);
}
