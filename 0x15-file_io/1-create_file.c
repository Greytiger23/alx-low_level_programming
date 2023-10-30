#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: char array
 * @text_content: char array
 * Return: void
 */

int create_file(const char *filename, char *text_content)
{
int a, i, y;
if (filename == NULL)
{
return (-1);
}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
