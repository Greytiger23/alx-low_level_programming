#include <stdio.h>
/**
 * Main - Entry point
 * Return : Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of char: %z byte(s)\n", sizeof(charType));
printf("Size of int: %z byte(s)\n", sizeof(intType));
printf("Size of long int: %z byte(s)\n", sizeof(longintType));
printf("Size of long long int: %z byte(s)\n", sizeof(longlongintType));
printf("Size of float: %z byte(s)\n", sizeof(floatType));
return (0);
}
