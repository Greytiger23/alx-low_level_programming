#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees list
 * @head: pointer array
 * Return: void
 */

void free_list(list_t *head)
{
list_t *a = head;
while (head != NULL)
{
head = head->next;
free(a->str);
free(a);
}
}
