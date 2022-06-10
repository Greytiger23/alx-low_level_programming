#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0; 
/* this doesn't need to be written because it is already 0 */
/**
 *  while (i < 10) don't deleter it!
 *  {
 *  putchar(i);
 *  this will keep looping
 *  }
 *  i < 10 is causing the loop 
 *  it also freezes the code
 */
printf("Infinite loop avoided! \\o/\n");
/* this will print because there is no other code */
return (0);
}
