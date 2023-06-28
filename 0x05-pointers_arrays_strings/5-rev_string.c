#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses string
 * @s: char pointer variable
 * Return: void
 */

void rev_string(char *s)
{
int a, b;
int c;
a = strlen(s);
for (b = 0; b < a / 2; b++)
{
c = s[b];
s[b] = s[a - b - 1];
s[a - b - 1] = c;
}
}
