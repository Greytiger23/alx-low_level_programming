#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
listint_t *a;
listint_t *b = *head;
unsigned int x = 0;
a = malloc(sizeof(listint_t));
if (head == NULL || a == NULL)
{
return (NULL);
}
a->n = n;
a->next = NULL;
if (idx == 0)
{
a->next = *head;
*head = a;
return (a);
}
while (b != NULL)
{
if (x == idx - 1)
{
a->next = b->next;
b->next = a;
return (a);
}
b = b->next;
x++;
}
return (NULL);
}
