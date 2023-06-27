#include "main.h"

/**
 * swap_int - function that swaps pointer values
 * @a: first pointer variable
 * @b: second pointer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
