#include "lists.h"
/**
 *add_nodeint_end - a new node at the start of a list creater function
 *@head: head double pointer input
 *@n: const int value for the new node
 *
 *Return: no of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current_node = NULL, *new_node = NULL;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
current_node = *head;
while (current_node->next != NULL)
{
current_node = current_node->next;
}
current_node->next = new_node;
}
return (new_node);
}
