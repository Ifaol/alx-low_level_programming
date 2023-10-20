#include "lists.h"
/**
 *add_nodeint - a new node at the start of a list creater function
 *@head: head double pointer input
 *@n: const int value for the new node
 *
 *Return: no of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = NULL;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
new_node->next = *head;
*head = new_node;
return (*head);
}
