#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

#define READ_BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _copy_content(int ac, char **av);
int _putchar(char c);
void print_osabi_more(Elf64_Ehdr h);

#endif
