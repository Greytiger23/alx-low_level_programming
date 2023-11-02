#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * mess - print error message
 * @m: char
 * Return: void
 */

void mess(const char *m)
{
fprintf(stderr, "%s\n", m);
exit(98);
}
/**
 * info - print info
 * @header: Elf64_Ehdr
 * Return: voud
 */
void info(const Elf64_Ehdr *header)
{
int i;
printf("Magic: ");
for (i = 0; i < 16; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("Class: %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
printf("Data: %s\n", header->e_ident[5] == 1 ? "2's complement, little endian"
: (header->e_ident[5] == 2 ? "2's complement, big endian" : "Unknown"));
printf("Version: %d\n", header->e_version);
printf("OS/ABI: %d\n", header->e_ident[7]);
printf("ABI Version: %d\n", header->e_ident[8]);
printf("Type: %d\n", header->e_type);
printf("Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - entry point
 * @ac: number of arguments
 * @av: list of arguments
 * Return: void
 */
int main(int ac, char *av[])
{
Elf64_Ehdr header;
const char *filename;
ssize_t x;
int fd;
if (ac != 2)
{
mess("Usage: elf_header elf_filename");
}
filename = av[1];
fd = open(filename, O_RDONLY);
if (fd == -1)
{
mess("Error: Can't open file");
}
x = read(fd, &header, sizeof(header));
if (x != sizeof(header))
{
close(fd);
mess("Error: Can't read ELF header");
}
if (header.e_ident[0] != 0x7f || strcmp((char *)
&header.e_ident[1], "ELF") != 0)
{
close(fd);
mess("Error: Not an ELF file");
}
info(&header);
close(fd);
return (0);
}
