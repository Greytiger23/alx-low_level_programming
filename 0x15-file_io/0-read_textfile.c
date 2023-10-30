#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: char array
 * @letters: list
 * Return: void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int a;
char *b;
ssize_t x, y;
if (filename == NULL)
{
return (0);
}
a = open(filename, O_RDONLY);
if (a == -1)
{
return (0);
}
b = malloc(sizeof(char) * letters);
if (!b)
{
close(a);
return (0);
}
x = read(a, b, letters);
if (x == -1)
{
close(a);
free(b);
return (0);
}
y = write(STDOUT_FILENO, b, x);
if (y == -1 || y != x)
{
close(a);
free(b);
return (0);
}
close(a);
free(b);
return (x);
}
