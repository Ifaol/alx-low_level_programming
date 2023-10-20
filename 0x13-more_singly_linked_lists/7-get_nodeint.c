#include "lists.h"
/**
 *get_nodeint_at_index - print a linked list's nth data function
 *@head: input pointer of type list_t
 *@index: index input
 *
 *Return: nth node data int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0 ; i < index ; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
