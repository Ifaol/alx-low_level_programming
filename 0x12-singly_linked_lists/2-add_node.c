#include "lists.h"
/**
 *add_node - create a new node for linked list and copy the string function
 *@head: input double pointer of type list_t
 *@str: input string
 *
 *Return: adrees of new pointer
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int count = 0;
list_t *new_node;
if (str == NULL)
{
return (NULL);
}
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (*str != '\0')
{
count++;
str++;
}
new_node->len = count;
new_node->next = *head;
*head = new_node;
return (new_node);
}
