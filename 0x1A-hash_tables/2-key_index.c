#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you
 * the index of a key
 * @key: char
 * @size: integer
 * Return: void
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int a = hash_djb2(key);
return (a % size);
}
