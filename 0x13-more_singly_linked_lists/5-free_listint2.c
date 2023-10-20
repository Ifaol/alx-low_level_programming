#include "lists.h"
/**
 *free_listint2 - free a linked list function
 *@head: input pointer of type list_t
 *
 *Return: Void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (*head == NULL)
{
return;
}
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
