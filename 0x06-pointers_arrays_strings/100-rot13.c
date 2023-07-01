#include "main.h"

/**
 * rot13 - function that encodes a string
 * @b: array
 * Return: void
 */

char *rot13(char *b)
{
int x, y;
char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char w[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (y = 0; b[y] != '\0'; y++)
{
for (x = 0; x <= 52; x++)
{
if (b[y] == i[x])
{
b[y] = w[x];
}
}
}
return (b);
}
