#include "main.h"

/**
 * rot13 - function that encodes a string
 * @b: array
 * Return: void
 */

char *rot13(char *b)
{
int x, y, a;
char i[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char w[] = "nopqrstuvwxyzabcdefghijklm"
"NOPQRSTUVWXYZABCDEFGHIJKLM";
a = sizeof(b);
for (y = 0; b[y] != '\0'; y++)
{
for (x = 0; x < a; x++)
{
if (b[y] == i[x])
{
b[y] = w[x];
}
}
}
return (b);
}
