#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees lis
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *a = *head;
if (head == NULL || *head == NULL)
{
return;
}
while (*head != NULL)
{
a = (*head)->next;
free(*head);
*head = a;
}
*head = NULL;
}
