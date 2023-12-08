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
if (idx == 0)
{
return (add_dnodeint(h, n));
}
if (*h == NULL)
{
return (NULL);
}
for (x = 0; x < idx - 1; x++)
{
if (b == NULL)
{
return (NULL);
}
b = b->next;
}
if (b == NULL)
{
return (NULL); }
a->n = n;
a->prev = b;
a->next = b->next;
if (b->next != NULL)
{
b->next->prev = a;
}
b->next = a;
return (a);
}
