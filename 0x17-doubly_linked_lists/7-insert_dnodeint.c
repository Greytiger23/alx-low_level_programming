#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position
 * @h: list
 * @idx: integer
 * @n: integer
 * Return: void
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *a = malloc(sizeof(dlistint_t));
dlistint_t *b = *h;
unsigned int x;
if (a == NULL)
{
return (NULL);
}
a->n = n;
if (*h == NULL && idx != 0)
{
free(a);
return (NULL);
}
if (idx == 0)
{
a->prev = NULL;
a->next = *h;
if (*h != NULL)
{
(*h)->prev = a;
}
*h = a;
return (a);
}
for (x = 0; x < idx; x++)
{
if (b == NULL)
{
free(a);
return (NULL);
}
b = b->next;
}
if (b == NULL)
{
free(a);
return (NULL);
}
a->prev = b;
a->next =b->next;
if (b->next != NULL)
{
b->next->prev = a;
}
b->next = a;
return (a);
}
