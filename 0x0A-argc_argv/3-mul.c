#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiples two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a;
int b;
if (argc == 3)
{
b = atoi(argv[1]);
a = atoi(argv[2]);
printf("%d\n", a *b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
