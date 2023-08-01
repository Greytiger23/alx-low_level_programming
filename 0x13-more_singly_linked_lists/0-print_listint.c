#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_listint - function that prints all elements
 * @h: array of elements
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t a = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return (a);
}
