#include "main.h"
/**
 *my_strcpy-a string copy function
 *@src: Input const char
 *
 *Return: copid string
 */
char *my_strcpy(const char *src)
{
int i, len = 0;
char *dup_str = NULL;
for (i = 0 ; src[i] != '\0' ; i++)
{
len = len + 1;
}
dup_str = (char *)malloc(len + 1);
if (dup_str == NULL)
{
return (NULL);
}
for (i = 0 ; i <= len ; i++)
{
dup_str[i] = src[i];
}
return (dup_str);
}
#include "main.h"
/**
 *free_grid-2d array freeing function with malloc
 *@height: input size of z array
 *@grid: input double string
 *
 *Return: void
 */
char *argstostr(int ac, char **av)
{
char **argv = NULL;
char *argv_single = NULL;
int i, j, total_len = 0, k = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
argv = (char **)malloc((ac + 1) * sizeof(char *));
if (argv == NULL)
{
return (NULL);
}
for (i = 0 ; i < ac ; i++)
{
argv[i] = my_strcpy(av[i]);
if (argv[i] == NULL)
{
for (j = 0 ; j <= i ; j++)
{
free(argv[j]);
}
free(argv);
return (NULL);
}
}
argv[ac] = NULL;
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
total_len = total_len + 1;
}
}
argv_single = (char *)malloc(total_len + 1 + ac);
if (argv_single == NULL)
{
for (j = 0 ; j < ac ; j++)
{
free(argv[j]);
}
free(argv);
return (NULL);
}
for (i = 0 ; i < ac ; i++)
{
for (j = 0 ; argv[i][j] != '\0' ; j++)
{
argv_single[k++] = argv[i][j];
}
argv_single[k++] = '\n';
free(argv[i]);
}
argv_single[k] = '\0';
free(argv);
return (argv_single);
}
