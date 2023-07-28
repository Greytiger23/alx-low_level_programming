#include "lists.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds node at the beginning
 * @head: pointer array
 * @str: char array
 * Return: address of new element, or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *a;
list_t *x = *head;
unsigned int b;
b = 0;
if (str == NULL)
{
return (NULL);
}
while (str[b])
{
b++;
}
a = malloc(sizeof(list_t));
if (a == NULL)
{
return (NULL);
}
a->str = strdup(str);
a->len = b;
a->next = NULL;
if (*head == NULL)
{
*head = a;
return (a);
}
while (x->next != NULL)
{
x = x->next;
}
x->next = a;
return (a);
}
