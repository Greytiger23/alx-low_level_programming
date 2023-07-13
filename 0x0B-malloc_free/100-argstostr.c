#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 * Return: void
 */

char *argstostr(int ac, char **av)
{
int a;
char **x;
if (ac == 0)
{
return (NULL);
}
if (av == NULL)
{
return (NULL);
}
x = malloc((strlen(*av) + 1) * sizeof(char));
if (x == NULL)
{
return (NULL);
}
for (a = 0; av[a]; a++)
{
printf("%s\n", av[a]);
}
x[a] = '\0';
return (*x);
}
