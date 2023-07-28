#include "lists.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

void list(list_t *head);
/**
 * add_node - function that adds node at the beginning
 * @head: pointer array
 * @str: char array
 * Return: address of new element, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *a;
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
a->next = *head;
*head = a;
return (*head);
}
