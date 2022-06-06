#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * more headers goes there
 * betty style doc for function main goes there
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last = n % 10;
if (last > 5)
{
printf("The last digit is %d and is greater than 5\n", last);
}
else 
if (last < 6)
{
printf("tThe last digit is %d and is less than 6 and not 0\n", last);
}
else 
if (last > 0)
{
printf("The last digit is %d and is less than 6 and not 0\n", last);
}
else 
{
printf("The last digit is %d and is 0\n", last);
}
return (0);
}
