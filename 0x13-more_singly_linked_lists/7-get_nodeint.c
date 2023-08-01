#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer
 * @index: unsigned integer
 * Return: void
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;
if (head == NULL)
{
return (NULL);
}
for (x = 0; x < index; x++)
{
head = head->next;
index--;
}
return (head);
}
