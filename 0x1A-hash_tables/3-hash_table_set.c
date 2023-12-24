#include "hash_tables.h"
/**
 *hash_table_set - a function that sets a key and value of a hash table
 *@ht: a hash table
 *@key: key of a value to be set
 *@value: value to be set
 *
 *Return: 1 if sucsussfull 0 if else
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index;
hash_node_t *new_node = NULL, *current = NULL;
const unsigned char *key1;
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
key1 = (const unsigned char *)key;
index = key_index(key1, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
if (value != NULL)
current->value = strdup(value);
else
{
current->value = NULL;
}
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup(key);
if (value != NULL)
new_node->value = strdup(value);
else
{
new_node->value = NULL;
}
new_node->next = NULL, new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
