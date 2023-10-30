#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of
 * a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 * Return: void
 */

int main(int ac, char *av[])
{
if (ac != 3)
{
mess("Usage: %s file_from file_to\n", av[0], 97);
}
const char *file_from = av[1];
const char *file_to = av[2];
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
mess("Error: Can't read from file %s\n", file_from, 98);
}
int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
close(fd_from);
mess("Error: Can't write to %s\n", file_to, 99);
}
char buff[BUFFER_SIZE];
ssize_t x, y;
while ((x = read(fd_from, buff, BUFFER_SIZE)) > 0)
{
y = write(fd_to, buff, x);
if (y != x)
{
close(fd_from);
close(fd_to);
mess("Error: Can't write to %s\n", file_to, 99);
}
}
if (x == -1)
{
close(fd_from);
close(fd_to);
mess("Error: Can't read from file %s\n", file_from, 98);
}
if (close(fd_from) == -1)
{
mess("Error: Can't close fd %d\n", fd_from, 100);
}
if (close(fd_to) == -1)
{
mess("Error: Can't close fd %d\n", fd_to, 100);
}
return (0);
}
/**
 * mess - function taht prints error message
 * @m: char array
 * @filename: char array
 * @e: integer
 * Return: void
 */
void mess(const char *m, const char *filename, int e)
{
dprintf(STDERR_FILENO, m, filename);
exit(e);
}
