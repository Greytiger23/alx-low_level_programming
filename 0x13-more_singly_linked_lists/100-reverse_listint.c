#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses list
 * @head: pointer array
 * Return: void
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *a = NULL, *c;
listint_t *b = *head;
while (b != NULL)
{
c = b->next;
a = b;
b = c;
}
*head = a;
return (*head);
}
