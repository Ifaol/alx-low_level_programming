#include "lists.h"
/**
 *list_len - print contents of a linked list function
 *@h: input pointer of type list_t
 *
 *Return: no of printed elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
return (count);
}
h = h->next;
count++;
}
return (count);
}
