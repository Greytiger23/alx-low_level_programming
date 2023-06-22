#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;
//declarion of interger
        printf("Infinite loop incoming :(\n");
//message saying there is an infinite loop
        i = 0;
//declartion of interger i
        while (i < 10)
        {
                putchar(i);
        }
//this while loop will end at 9
        printf("Infinite loop avoided! \\o/\n");
//it will print a message after while loop
        return (0);
}
