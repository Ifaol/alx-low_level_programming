#include <unistd.h>
#include <string.h>
/**
 *main - Entry point of the program
 *
 *Return: 1 on successful execution
 */
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
/*Write the message to the standard error stream*/
write(2, message, strlen(message));
return (1);
}
