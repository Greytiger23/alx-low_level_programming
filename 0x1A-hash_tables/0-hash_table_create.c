#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: integer
 * Return: void
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int x;
hash_table_t *a = malloc(sizeof(hash_table_t));
if (a == NULL)
{
return (NULL);
}
a->size = size;
a->array = malloc(sizeof(hash_table_t *) * size);
if (a->array == NULL)
{
free(a);
return (NULL);
}
for (x = 0; x < size; x++)
{
a->array[x] = NULL;
}
return (a);
}
