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
if (head == NULL)
{
return (NULL);
}
while (index > 0 && head != NULL)
{
head = head->next;
index--;
}
return (head);
}
