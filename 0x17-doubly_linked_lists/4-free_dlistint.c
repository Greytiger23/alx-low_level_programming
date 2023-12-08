#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *a = head, *b;
while (a != NULL)
{
b = a->next;
free(a);
a = b;
}
}
