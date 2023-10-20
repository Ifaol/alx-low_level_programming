#include "lists.h"
/**
 *free_list - free a linked list function
 *@head: input pointer of type list_t
 *
 *Return: Void
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
