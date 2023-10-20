#include "lists.h"
/**
 *free_listint - free a linked list function
 *@head: input pointer of type list_t
 *
 *Return: Void
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
