#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
