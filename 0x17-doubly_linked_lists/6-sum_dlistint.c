#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: list
 * Return: void
 */

int sum_dlistint(dlistint_t *head)
{
int a = 0;
while (head != NULL)
{
a += head->n;
head = head ->next;
}
return (a);
}
