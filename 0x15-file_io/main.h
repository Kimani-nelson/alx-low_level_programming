#ifndef FILE_IO_H
#define FILE_IO_H

#include <stddef.h> // for size_t

/* Reads a file and prints its contents to stdout, up to `letters` number of characters. 
   Returns the number of characters read, or -1 if an error occurred. */
ssize_t read_textfile(const char *filename, size_t letters);

/* Creates a new file with the given `filename`, and writes the `text_content` to it.
   Returns 1 on success, or -1 if an error occurred. */
int create_file(const char *filename, char *text_content);

/* Appends the `text_content` to an existing file with the given `filename`.
   If the file does not exist, it is created. Returns 1 on success, or -1 if an error occurred. */
int append_text_to_file(const char *filename, char *text_content);

#endif // FILE_IO_H
