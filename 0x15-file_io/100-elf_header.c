#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_header - function that prints the headers
 * @head: array list
 * Return: void
 */

void print_header(Elf64_Ehdr *head)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf(" %02x", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", header->e_type == ET_REL ? "REL (Relocatable file)" :
                                                          header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                          header->e_type == ET_DYN ? "DYN (Shared object file)" :
                                                          header->e_type == ET_CORE ? "CORE (Core file)" : "UNKNOWN (unknown type)");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}
}
