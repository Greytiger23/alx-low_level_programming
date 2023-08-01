#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a node at the end
 * @head: array
 * @n: integer pointer
 * Return: void
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *a;
listint_t *b = *head;
a = malloc(sizeof(listint_t));
if (a == NULL)
{
return (NULL);
}
a->n = n;
a->next = NULL;
if (*head == NULL)
{
*head = a;
return (a);
}
while (b->next != NULL)
{
b = b->next;
}
b->next = a;
return (a);
}
