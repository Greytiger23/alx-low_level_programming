#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - function that copies string
 * @dest: char pointer variable
 * @src: char pointer variable
 */

char *_strcpy(char *dest, char *src)
{
char a = sizeof(dest);
memset(dest, '\0', a);
strcpy(dest, src);
return (dest);
}
