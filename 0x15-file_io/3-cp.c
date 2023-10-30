#include "main.h"
/**
 *main - a function zt copies the content of a file to another file
 *@argc: no of args entered
 *@argv: pointer to array of args
 *
 *Return: 0 always sucessfull
 */
int main(int argc, char *argv[])
{
const char *file_from = NULL;
const char *file_to = NULL;
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = argv[1];
file_to = argv[2];
copy_file(file_from, file_to);
return (0);
}
/**
 *error_exit - a function zt prints provided error and exit code
 *@code: error code
 *@message: error message
 *@file_name: pointer to a file name
 *
 *Return: void
 */
void error_exit(int code, const char *message, const char *file_name)
{
dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
exit(code);
}
/**
 *copy_file - a function zt copies content from one file to other
 *@file_from: pointer to src file
 *@file_to: pointer to dest file
 *
 *Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t bytes_read = 1024, bytes_written;
char buffer[1024];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Can't read from file", file_from);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (fd_to == -1)
{
close(fd_from);
error_exit(99, "Can't write to", file_to);
}
while (bytes_read > 0)
{
bytes_read = read(fd_from, buffer, 1024);
if (bytes_read == -1)
{
error_exit(98, "Can't read from file", file_from);
}
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
error_exit(99, "Can't write to", file_to);
}
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_to);
exit(100);
}
}
