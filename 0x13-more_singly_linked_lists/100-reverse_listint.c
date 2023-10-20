#include "lists.h"
/**
 *reverse_listint - a linked list reveraing function
 *@head: double pointer input
 *
 *Return: a pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head, *next = NULL, *prev = NULL;
if (*head == NULL)
{
return (NULL);
}
if ((*head)->next == NULL)
{
return (*head);
}
while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (*head);
}
