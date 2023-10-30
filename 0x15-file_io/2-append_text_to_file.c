#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

/**
 * append_text_to_file - function that appends text
 * at the end of a file
 * @filename: char array
 * @text_content: char array
 * Return: void
 */

int append_text_to_file(const char *filename, char *text_content)
{
int a;
ssize_t x, y;
if (filename == NULL)
{
return (-1);
}
if (access(filename, F_OK) != 0)
{
return (-1);
}
a = open(filename, O_WRONLY | O_APPEND);
if (a == -1)
{
return (-1);
}
if (text_content != NULL)
{
x = strlen(text_content);
y = write(a, text_content, x);
if (y == -1 || y != x)
{
close(a);
return (-1);
}
}
close(a);
return (1);
}
