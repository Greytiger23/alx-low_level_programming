#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: char array
 * @text_content: char
 * Return: void
 */

int create_file(const char *filename, char *text_content)
{
int x;
int b;
if (filename == NULL)
{
return (-1);
}
x = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
S_IRUSR | S_IWUSR);
if (x == -1)
{
return (-1);
}
if (text_content != NULL)
{
b = write(x, text_content, strlen(text_content));
if (b == -1)
{
close(x);
return (-1);
}
}
close(x);
return (-1);
}
