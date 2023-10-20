#include "lists.h"
/**
 *insert_nodeint_at_index - a new node at an index of a list creater function
 *@head: head double pointer input
 *@idx: index of new node to be  added
 *@n: node value at index
 *Return: added node adress
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current_node = NULL, *new_node = NULL;
unsigned int i;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (idx == 0 && *head == NULL)
{
*head = new_node;
return (*head);
}
current_node = *head;
if (idx == 0)
{
*head = new_node;
(*head)->next = current_node;
return (*head);
}
for (i = 0 ; i < idx - 1 ; i++)
{
if (current_node == NULL)
{
free(new_node);
return (NULL);
}
current_node = current_node->next;
}
if (current_node == NULL)
{
return (NULL);
}
new_node->next = current_node->next;
current_node->next = new_node;
return (new_node);
}
