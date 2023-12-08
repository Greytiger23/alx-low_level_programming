#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: list
 * @index: integer
 * Return: void
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a = 0;
while (head != NULL && a < index)
{
head = head->next;
a++;
}
if (head == NULL || a < index)
{
return (NULL);
}
return (head);
}
