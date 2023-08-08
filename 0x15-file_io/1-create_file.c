#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - function that creates file
 * @filename: const char array
 * @text_content: char array
 * Return: void
 */

int create_file(const char *filename, char *text_content)
{
int a;
ssize_t i, y;
if (filename == NULL)
{
return (-1);
}
a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (a == -1)
{
return (-1);
}
if (text_content != NULL)
{
i = strlen(text_content);
y = write(a, text_content, i);
if (y == -1 || y != i)
{
close(a);
return (-1);
}
}
close(a);
return (1);
}