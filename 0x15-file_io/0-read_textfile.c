#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: char array
 * @letters: list array
 * Return: void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int i;
char *x;
ssize_t a, b;
if (filename == NULL)
{
return (0);
}
i = open(filename, O_RDONLY);
if (i == -1)
{
return (0);
}
x = malloc(letters + 1);
if (!x)
{
close(i);
return (i);
}
a = read(i, x, letters);
if (a == -1)
{
close(i);
free(x);
return (i);
}
b = write(STDOUT_FILENO, x, a);
if (b == -1 || (ssize_t)b != a)
{
close(i);
free(x);
return (0);
}
close(i);
free(x);
return (a);
}
