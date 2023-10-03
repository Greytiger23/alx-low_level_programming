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
const char *file_from, *file_to;
int a, b;
char *buff;
ssize_t x, y;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = malloc(sizeof(char) * 1024);
file_from = av[1];
file_to = av[2];
a = open(file_from, O_RDONLY);
b = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
while ((x = read(a, buff, BUFFER_SIZE)) > 0)
{
y = write(b, buff, x);
if (y == -1 || b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
exit(99);
}
}
if (x == -1 || a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
closefd(a);
closefd(b);
return (0);
}
/**
 * closefd - function that closes the file descriptors
 * @x: integer
 * Return: void
 */
void closefd(int x)
{
int i;
i = close(x);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
exit(100);
}
}
