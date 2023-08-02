#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: pointer array
 * @index: unsigned integer
 * Return: void
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *a = NULL;
listint_t *b = *head;
unsigned int x = 0;
if (*head == NULL)
{
return (-1);
}
while (index > x && b != NULL)
{
a = b;
b = b->next;
x++; }
if (index > x || b == NULL)
{
return (-1);
}
if (a == NULL)
{
*head = b->next;
}
else
{
a->next = b->next;
}
free(b);
return (1);
}
