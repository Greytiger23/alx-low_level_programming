#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: table array
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int a;
hash_node_t *x;
if (ht == NULL)
{
return;
}
printf("{");
for (a = 0; a < ht->size; a++)
{
x = ht->array[a];
while (x != NULL)
{
printf("'%s': '%s'", x->key, x->value);
x = x->next;
if (x != NULL)
{
printf(", ");
}
}
if (a < ht->size - 1 && ht->array[a + 1] != NULL)
{
printf(", ");
}
}
printf("}\n");
}
