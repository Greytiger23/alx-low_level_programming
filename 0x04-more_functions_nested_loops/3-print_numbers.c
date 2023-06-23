#include "main.h"

/**
 * print_numbers - function that prints numbers
 * Return: void
 */
void print_numbers(void)
{
int a;
for  (a = 0; a <= 9; a++)
{
putchar(a + '0');
}
putchar('\n');
}
