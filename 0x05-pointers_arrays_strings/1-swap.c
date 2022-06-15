#include "main.h"
#include <stdio.h>
/**
 * swap_int - pointer variable with two integers
 * Return: Nothing
 * @a: int parameter
 * @b: int parameter
 */
void swap_int(int *a, int *b)
{
int num;
num = *a;
*a = *b;
*b = num;
}
