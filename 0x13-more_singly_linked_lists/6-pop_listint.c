#include "lists.h"
/**
 *pop_listint - free a linked list function
 *@head: input pointer of type list_t
 *
 *Return: head node data int
 */
int pop_listint(listint_t **head)
{
listint_t *temp = *head;
int node_data;
if (*head == NULL)
{
return (0);
}
node_data = (*head)->n;
*head = (*head)->next;
free(temp);
return (node_data);
}
