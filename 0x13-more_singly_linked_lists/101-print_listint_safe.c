#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints lists
 * @head: pointer array
 * Return: void
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *a = head;
const listint_t *b = head;
size_t x = 0;
while (a != NULL && b != NULL && b->next != NULL)
{
b = b->next->next;
if (a == b)
{
printf("[%p] %d\n", (void *)a, a->n);
a = a->next;
x++;
while (a != b)
{
printf("[%p] %d\n", (void *)a, a->n);
a = a->next;
x++;
}
exit(98);
}
printf("[%p] %d\n", (void *)a, a->n);
a = a->next;
x++;
}
return (x);
}
