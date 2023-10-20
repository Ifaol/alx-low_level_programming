#include "main.h"
/**
 *_calloc-a memory allocater function
 *@nmemb: int input
 *@size: int input
 *Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = NULL;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
