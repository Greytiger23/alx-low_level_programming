#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
int a, i;
const char *file_from, *file_to;
char b[BUFFER_SIZE];
ssize_t x, y;
if (argc != 3)
{
print_e("Usage: %s file_from file_to\n", argv[0], 97);
}
file_from = argv[1];
file_to = argv[2];
a = open(file_from, O_RDONLY);
if (a == -1)
{
print_e("Error: Can't read from file %s\n", file_from, 98);
}
i = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
if (i == -1)
{
close(a);
print_e("Error: Can't write to %s\n", file_to, 99);
}
while ((x = read(a, b, BUFFER_SIZE)) > 0)
{
y = write(i, b, x);
if (y != x)
{
close(a);
close(i);
print_e("Error: Can't write to %s\n", file_to, 99);
}
}
if (x == -1)
{
close(a);
close(i);
print_e("Error: Can't read from file %s\n", file_from, 98);
}
if (close(a) == -1)
{
printf("Error: Can't close fd %d\n", a);
exit(100);
}
if (close(i) == -1)
{
printf("Error: Can't close fd %d\n", i);
exit(100);
}
return (0);
}

/**
 * print_e - function that prints error message
 * @mess: const char array
 * @filename: cinst char array
 * @c: integer
 * Return: void
 */
void print_e(const char *mess, const char *filename, int c)
{
dprintf(STDERR_FILENO, mess, filename);
exit(c);
}
