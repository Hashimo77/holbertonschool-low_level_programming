#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdlib.h>

/* Prototype of read_textfile function */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* LISTS_H */
