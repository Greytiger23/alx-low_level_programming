#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: list
 * @n: int
 * Return: void
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *a = malloc(sizeof(dlistint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
a->prev = NULL;
a->next = *head;
if (*head != NULL)
{
(*head)->prev = a;
}
*head = a;
return (a);
}
