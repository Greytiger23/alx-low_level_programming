#include "main.h"
#include <string.h>

int pali(char *s, int x, int y);
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
int a;
a = strlen(s);
if (*s == 0)
{
return (1);
}
if (a == '\0')
{
return (0);
}
return (pali(s, 0, a));
}
/**
 * pali - checks for palidrome
 * @s: string
 * @x: iterator
 * @y: length
 * Return: void
 */
int pali(char *s, int x, int y)
{
if (*(s + x) != *(s + y - 1))
{
return (0);
}
if (x >= y)
{
return (1);
}
return (pali(s, x + 1, y - 1));
}
