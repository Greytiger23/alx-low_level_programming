#include "lists.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - function that frees the list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *a;
while (head != NULL)
{
a = head->next;
free(head);
head = a;
}
}
