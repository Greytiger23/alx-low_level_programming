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
int num1, num2;
char *c;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
c = argv[2];
if (get_op_func(c) == NULL)
{
printf("Error\n");
exit(99);
}
if (c[1] == '/' || c[1] == '%' || num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(c)(num1, num2));
return (0);
}
