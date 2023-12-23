#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table array
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int a;
hash_node_t *x, *y;
if (ht == NULL)
{
return;
}
for (a = 0; a < ht->size; a++)
{
x = ht->array[a];
while (x != NULL)
{
y = x;
x = x->next;
free(y->key);
free(y->value);
free(y);
}
}
free(ht->array);
free(ht);
}
