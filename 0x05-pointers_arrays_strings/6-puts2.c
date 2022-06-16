#include "main.h"
#include <stdio.h>
/**
 * puts2 - pointer that changes
 * @str: character
 * Return: void
 */
void puts2(char *str)
{
char *end;
int n, sum;
int len = 0;
for (n = 0; str[n]; n++)
{
len++;
}
sum = len;
end = str;
for (n = 0; n < sum; n++)
{
putchar(str[n]);
end++;
}
putchar('\n');
}
