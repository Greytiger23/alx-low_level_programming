#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates the substring
 * @haystack: array
 * @needle: char pointer
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
haystack = strstr(haystack, needle);
return (haystack);
}
