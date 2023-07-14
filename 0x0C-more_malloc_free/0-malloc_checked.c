#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: integer pointer variable
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
int *a;
a = (int *) malloc(b);
if (a == NULL)
{
printf("98");
exit(0);
}
return (a);
}
