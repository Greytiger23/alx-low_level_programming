#include "main.h"
#include <stdio.h>
/**
 * rev_string -shows a reverse string
 * @s: pointer that changes
 * Return: void
 */
void rev_string(char *s)
{
char *b, *e, c;
int a;
int len = 0;
for (a = 0; s[a]; a++)
{
len++;
}
b = s;
e = s;
if ((a = 0) && (a < len - 1))
{
a++;
e++;
}
for (a = 0; a < len / 2; a++)
{
c = *e;
*e = *b;
*b = c;
b++;
e--;
}
}
