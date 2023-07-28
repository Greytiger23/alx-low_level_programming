#include "lists.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of list
 * @h: pointer array
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t a = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
a++;
}
return (a);
}
