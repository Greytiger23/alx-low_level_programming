#include "main.h"
/**
 * _isalpha - checks for lower and uppercase
 * @c: lower or uppercase letter
 * Return: void
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
}
