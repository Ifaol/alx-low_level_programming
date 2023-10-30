#include "main.h"
/**
 *read_textfile - a function that reads file and write it on stdout
 *@filename: pointer to a file
 *@letters: no of chars to read & write
 *
 *Return: no of chars read & write or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytesRead, bytesWritten;
int fd;
char *buffer = NULL;
if (filename == NULL || letters <= 0)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytesRead = read(fd, buffer, letters);
if (bytesRead <= 0)
{
close(fd);
free(buffer);
return (0);
}
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten != bytesRead)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);
return (bytesWritten);
}
