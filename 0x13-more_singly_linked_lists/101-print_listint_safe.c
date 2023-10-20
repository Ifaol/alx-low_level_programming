#include "lists.h"
/**
 *print_listint_safe - a print all elements of a list function
 *@head: head pointer input
 *
 *Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current_head = head;
if (!head)
{
exit(98);
}
while (current_head)
{
printf("[%p] %i\n", (void *)current_head, current_head->n);
current_head = current_head->next;
count++;
}
return (count);
}
