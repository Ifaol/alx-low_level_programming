#include "lists.h"
/**
 *print_listint - a print all elements of a list function
 *@h: head pointer input
 *
 *Return: no of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
{
return (0);
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
