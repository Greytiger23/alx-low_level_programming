#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: char array
 * @text_content: char
 * Return: void
 */

int append_text_to_file(const char *filename, char *text_content)
{
int x;
ssize_t a, b;
if (filename == NULL)
{
return (-1);
}
if (access(filename, F_OK) != 0)
{
return (-1);
}
x = open(filename, O_WRONLY | O_APPEND);
if (x == -1)
{
return (-1);
}
if (text_content != NULL)
{
a = strlen(text_content);
b = write(x, text_content, a);
if (b == -1 || b != a)
{
close(x);
return (-1);
}
}
close(x);
return (1);
}
