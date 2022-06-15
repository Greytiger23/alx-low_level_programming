#include "main.h"
#include <stdio.h>
/**
 * _strlen - is a pointer variable to a character
 * Return: Always 0 (Success)
 * @s: input character parameter
 */
int _strlen(char *s)
{
int l;
l = 0;
while (s[l] != '\0')
{
l++;
}
return (l);
}
