#include "lists.h"
/**
 *listint_len - a return no of nodes of a list function
 *@h: head pointer input
 *
 *Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
