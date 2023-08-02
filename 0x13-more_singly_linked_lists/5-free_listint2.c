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
listint_t *a;
listint_t *b = *head;
if (*head == NULL)
{
return;
}
while (b != NULL)
{
a = b->next;
free(b);
b = a;
}
*head = NULL;
}
