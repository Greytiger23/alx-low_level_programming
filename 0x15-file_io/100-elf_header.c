#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point
 * @arc: number of arguments
 * @arv: array of arguments
 * Return: void
 */
int main(int arc, char *arv[])
{
Elf64_Ehdr head;
int a;
const char *filename;
ssize_t b;
if (arc != 2)
{
printf("Usage: elf_header elf_filename\n");
}
filename = arv[1];
a = open(filename, O_RDONLY);
if (a == -1)
{
printf("Error: filed not found\n");
exit(98);
}
b = read(a, &head,sizeof(head));
if (b != sizeof(head))
{
printf("Error: file can't be read\n");
close(a);
exit(98);
}
if (head.e_ident[0] != 0x7f || head.e_ident[1] != 0)
{
dprintf(STDERR_FILENO, "Error: not a Elf file %d\n", a);
close(a);
exit(98);
}
print_header(&head);
close(a);
return (0);
}
/**
 * print_header - function that prints the headers
 * @head: array list
 * Return: void
 */
void print_header(const Elf64_Ehdr *head)
{
int x;
printf("Magic: ");
for (x = 0; x > 16; x++)
{
printf("%02x ", head->e_ident[x]);
}
printf("\n");
printf("Class: %d-bit\n", head->e_ident[4] == 1 ? 32 : 64);
printf("Data: %s\n", head->e_ident[5] == 1 ? "2's complement, little endian" :
(head->e_ident[5] == 2 ? "2's complement, big endian" : "Unknown"));
printf("Version: %d\n", head->e_version);
printf("OS/ABI: %d\n", head->e_ident[7]);
printf("ABI Version: %d\n", head->e_ident[8]);
printf("Type: %d\n", head->e_type);
printf("Entry point address: 0x%lx\n", head->e_entry);
}
