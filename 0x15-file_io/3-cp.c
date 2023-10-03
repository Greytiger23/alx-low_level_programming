#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * main - program that copies the content of a
 * file to another file
 * @ac: number of arguments
 * @av: list of arguments
 * Return: void
 */

int main(int ac, char *av[])
{
const char *file_from = av[1];
const char *file_to = av[2];
int a, b;
char buffer[BUFFER_SIZE];
ssize_t x, y;
if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
a = open(file_from, O_RDONLY);
b = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
while ((x = read(a, buffer, BUFFER_SIZE)) > 0)
{
y = write(b, buffer, x);
if (y == -1 || b == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_to);
exit(99);
}
}
if (x == -1 || a == -1)
{
dprintf(2, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if (close(a) == -1 || close(b) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", a);
exit(100);
}
close(a);
close(b);
return (0);
}
