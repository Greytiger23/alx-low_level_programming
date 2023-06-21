#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{
char x;
int a;
a = 0;
while (a < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
a++;
_putchar('\n');
}
}
