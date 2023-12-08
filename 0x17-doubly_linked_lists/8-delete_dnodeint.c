#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list
 * @head: list
 * @index: integer
 * Return: void
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *a = *head;
unsigned int x;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = a->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(a);
return (1);
}
for (x = 0; x < index; x++)
{
if (a == NULL)
{
return (-1);
}
a = a->next;
}
if (a == NULL)
{
return (-1);
}
if (a->prev != NULL)
{
a->prev->next = a->next;
}
if (a->next != NULL)
{
a->next->prev = a->prev;
}
free(a);
return (1);
}
