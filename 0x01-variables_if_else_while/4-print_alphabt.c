#include <stdio.h>
/**
 * main - Entry point
 * print alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
for (a = 'q'; a = 'e'; a--)
{
a--;
}
putchar('\n');
return (0);
}