#include "main.h"
/**
 *append_text_to_file - a function zt append_text_to_file
 *@filename: pointer to a file
 *@text_content: pointer to a contetnt to be written
 *
 *Return: 1 if sucessusfull and -1 else
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t bytes_written;
int fd, leng = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(fd);
return (1);
}
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
close(fd);
return (1);
}
