#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * main - function that prints the answer
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
int a, b;
char *c;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
c = argv[2];
if (get_op_func(c) == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", get_op_func(c)(a, b));
return (0);
}
