#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * listint_len - function that returns number of bullets
 * @h: array of elements
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
