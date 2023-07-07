#include "main.h"
#include <stdio.h>

/**
 * main - function that prints number of arguments
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
