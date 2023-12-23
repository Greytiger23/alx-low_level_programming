#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key
 * @ht: table array
 * @key: char
 * Return: void
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int a;
hash_node_t *x;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
a = key_index((const unsigned char *)key, ht->size);
x = ht->array[a];
while (x != NULL)
{
if (strcmp(x->key, key) == 0)
{
return (x->value);
}
x = x->next;
}
return (NULL);
}
