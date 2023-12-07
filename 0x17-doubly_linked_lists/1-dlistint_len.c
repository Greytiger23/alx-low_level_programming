#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 * @H: list
 * Return: void
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
