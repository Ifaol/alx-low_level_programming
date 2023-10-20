#include "lists.h"
/**
 *delete_nodeint_at_index - a node at an index of a list delete function
 *@head: head double pointer input
 *@index: index of new node to be delleted
 *
 *Return: 1 if sucesseful -1 else
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *prev_node;
unsigned int i;
if (*head == NULL)
{
return (-1);
}
current_node = *head;
if (index == 0)
{
*head = (*head)->next;
free(current_node);
return (1);
}
for (i = 0 ; i < index ; i++)
{
if (current_node == NULL)
{
return (-1);
}
prev_node = current_node;
current_node = current_node->next;
}
if (current_node == NULL)
{
return (-1);
}
prev_node->next = current_node->next;
free(current_node);
return (1);
}
