#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that prints the sum of data
 * @head: pointer
 * Return: void
 */

int sum_listint(listint_t *head)
{
int a = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
a += head->n;
head = head->next;
}
return (a);
}
