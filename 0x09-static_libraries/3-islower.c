#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: is the lower letter
 * Return: void
 */
int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
