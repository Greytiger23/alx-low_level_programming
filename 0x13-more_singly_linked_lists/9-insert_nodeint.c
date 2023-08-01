#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * given postion
 * @head: pointer array
 * @idx: unsigned integer
 * @n: integer
 * Return: void
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *a, *c = NULL;
listint_t *b = *head;
if (*head == NULL)
{
return (NULL);
}
a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
}
else
{
a->n = n;
a->next = NULL;
}
while (idx > 0 && *head != NULL)
{
c = b;
b = b->next;
idx--;
}
if (c == NULL)
{
a->next = *head;
*head = a;
}
else
{
a->next = b;
c->next = a;
}
return (a);
}
