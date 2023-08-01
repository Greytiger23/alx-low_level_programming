#include "lists.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: pointer
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
listint_t *a = *head;
int n;
if (*head == NULL)
{
return (0);
}
n = (*head)->n;
*head = (*head)->next;
free(a);
return (n);
}
