#include "lists.h"
/**
 *sum_listint - print the sum of alldata in a linked list function
 *@head: input pointer of type list_t
 *
 *Return: sum of all node data int
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
