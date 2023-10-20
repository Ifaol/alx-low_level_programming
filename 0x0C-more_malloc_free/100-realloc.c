#include "main.h"
/**
 *_ra_he-a helper for the custome realloc function
 *@ptr: string pointer input
 *@new_p: string pointer input
 *@old_s: int input
 *@new_s: int input
 *
 *Return: void pointer
 */
void *_ra_he(void *ptr, void *new_p, unsigned int old_s, unsigned int new_s)
{
unsigned int i, span;
unsigned char *src, *dest;
dest = (unsigned char *)new_p;
src = (unsigned char *)ptr;
if (new_s >= old_s)
{
span = old_s;
}
else
{
span = new_s;
}
for (i = 0 ; i < span ; i++)
{
dest[i] = src[i];
}
free(ptr);
return (new_p);
}
#include "main.h"
/**
 *_realloc-a custom realloc function
 *@ptr: string pointer input
 *@old_size: int input
 *@new_size: int input
 *
 *Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (ptr == NULL)
{
return (new_ptr);
}
else
{
return (_ra_he(ptr, new_ptr, old_size, new_size));
}
}
