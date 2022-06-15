#include "main.h"
#include <stdio.h>
/**
 * _puts - show the string
 * @str: pointer vraiable
 * Return: Nothing
 */
void _puts(char *str)
{
int s;
s = 0;
while (str[s] != '\0')
{
s++;
}
for (s = s + 1; s >= 0; s++)
{
_putchar(str[s]);
}
_putchar('\n');
}
