#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to do
 * @s: pointer
 * Return: void
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
if (s == NULL)
{
return (NULL);
}
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}
