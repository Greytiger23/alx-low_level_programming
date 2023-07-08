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
if (argc > 1)
{
for (x = 1; x < argc; x++)
{
if (*argv[x] == b[x])
{
printf("Error\n");
return (1);
}
a = atoi(argv[x]);
}
i = a + a;
printf("%d\n", i);
}
else
{
printf("0\n");
}
return (0);
}
