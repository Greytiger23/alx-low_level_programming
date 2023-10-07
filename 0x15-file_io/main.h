#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <elf.h>
#include <stdint.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char *av[]);
void closefd(int x);
void print_header(const Elf64_Ehdr *head);
int main(int arc, char *arv[]);
#endif
