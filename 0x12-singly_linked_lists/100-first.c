#include <stdio.h>

void print_before() __attribute__((constructor));
/**
 * print_before - function that prints before main
 * Return: void
 */

void print_before()
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
