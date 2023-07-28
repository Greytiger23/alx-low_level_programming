#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * @h: pointer array
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
