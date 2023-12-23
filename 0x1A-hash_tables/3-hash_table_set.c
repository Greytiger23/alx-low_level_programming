#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table
 * @ht: table array
 * @key: char
 * @value: char
 * Return: void
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int a;
hash_node_t *x;
hash_node_t *y = malloc(sizeof(hash_table_t));
if (ht == NULL || key == NULL || *key == '\0')
{
return (0);
}
a = key_index((const unsigned char *)key, ht->size);
x = ht->array[a];
while (x != NULL)
{
if (strcmp(x->key, key) == 0)
{
free(x->value);
x->value = strdup(value);
if (x->value == NULL)
{
return (0);
}
return (1);
}
x = x->next;
}
if (y == NULL)
{
return (0);
}
y->key = strdup(key);
y->value = strdup(value);
if (y->key == NULL || y->value == NULL)
{
free(y->key);
free(y->value);
free(y);
return (0);
}
y->next = ht->array[a];
ht->array[a] = y;
return (1);
}
