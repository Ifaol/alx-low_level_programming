#include "hash_tables.h"
/**
 *hash_table_get - a func that retrive a value at key from hash table
 *@ht: a hash table
 *@key: key of a hash table data
 *
 *Return: value if found or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
char *value = NULL;
const unsigned char *key1;
unsigned long index;
hash_node_t *current = NULL;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
key1 = (const unsigned char *)key;
index = key_index(key1, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
value = current->value;
return (value);
}
current = current->next;
}
return (value);
}
