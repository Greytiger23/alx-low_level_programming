#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at beginning
 * @head: array
 * @n: integer pointer
 * Return: void
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;
a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
a->next = *head;
*head = a;
return (a);
}
