#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: constant char array
 * @letters: size list
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
perror("error opening file");
return (0);
}
b = malloc(letters + 1);
if (!b)
{
close(a);
return (0);
}
x = read(a, b, letters);
if (x == -1)
{
perror("error opening file");
close(a);
free(b);
return (0);
}
b[x] = '\0';
y = write(STDOUT_FILENO, b, x);
if (y == -1 || (ssize_t)y != x)
{
perror("error opening file");
close(a);
free(b);
return (0);
}
close(a);
free(b);
return (x);
}
