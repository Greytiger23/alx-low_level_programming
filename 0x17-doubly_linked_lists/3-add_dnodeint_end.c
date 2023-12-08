#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head: list
 * @n: int
 * Return: void
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *a, *b = *head;
a = malloc(sizeof(dlistint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
a->next = NULL;
if (*head == NULL)
{
a->prev = NULL;
*head = a;
}
else
{
while (b->next != NULL)
{
b = b->next;
}
a->prev = b;
b->next = a;
}
return (a);
}
