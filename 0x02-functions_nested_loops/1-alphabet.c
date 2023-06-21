#include "main.h"
#include "_putchar.c"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
