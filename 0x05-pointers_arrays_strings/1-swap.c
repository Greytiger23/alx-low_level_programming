#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 98;
int b = 42;
int *ip;
int *ipb;
ip = &b;
ipb = &a;
printf("a=%d, b=%d\n", *ip, *ipb);
return(0);
}
