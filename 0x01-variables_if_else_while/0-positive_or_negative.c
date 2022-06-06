#include <stdlib.i>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * more headers goes there
 * betty style doc for function main goes there
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf(n " is positive\n");
return (0);
if (n < 0)
printf(n " is negative\n");
return (0);
printf(n " is zero\n");
return (0);
}
