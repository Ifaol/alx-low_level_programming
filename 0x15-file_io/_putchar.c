#include "main.h"
/**
 *_putchar - a custom putchar function
 *@c: int input to be printed
 *
 *Return: char value of the printed char
 */
int _putchar(int c)
{
if (write(1, &c, 1) == -1)
{
perror("write");
return (EOF);
}
return (((unsigned char)c));
}
