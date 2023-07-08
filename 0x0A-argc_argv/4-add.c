#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, x, i;
char b[] = "abcdefghijklmnopqrstuvwxyz";
for (i = 1; i < argc; i++)
{
x = 1;
if (argc == 0)
{
printf("0\n");
}
if (*argv[i] == b[i])
{
printf("Error\n");
return (1);
}
a = a + atoi(argv[x]);
x++;
}
printf("%d\n", a);
return (0);
}
