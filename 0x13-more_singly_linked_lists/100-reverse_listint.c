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
listint_t *a;
listint_t *b = *head;
if (a == NULL)
{
return (NULL);
}
a = *head;
*head = a;
return (a);
}
