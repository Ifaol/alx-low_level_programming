#include "main.h"
/**
 *create_file - a function zt creats file and writes on it
 *@filename: pointer to a file
 *@text_content: pointer to a contetnt to be written
 *
 *Return: 1 if sucessusfull and -1 else
 */
int create_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
int fd, leng = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[leng] != '\0')
{
leng++;
}
bytes_written = write(fd, text_content, leng);
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
