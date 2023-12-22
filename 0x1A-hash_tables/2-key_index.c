#include "hash_tables.h"
/**
 *key_index - a function that return the index of a key in a hash table
 *@key: key to be stored on a hash table
 *@size: size of a hash table
 *
 *Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;
if (size >= 1 && key != NULL)
{
hash_value = hash_djb2(key);
}
return (hash_value);
}
