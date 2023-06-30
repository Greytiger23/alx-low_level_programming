#include "main.h"

/**
 * leet - function that encodes a string
 * @a: array
 * Return: void
 */

char *leet(char *a)
{
char x[] = "aAeEoOtTlL";
char i[] = "4433007711";
int b, c;
for (b = 0; a[b] != '\0'; b++)
{
for (c = 0; c < 10; c++)
{
if (a[b] == x[c])
{
a[b] = i[c];
}
}
}
return(a);
}
