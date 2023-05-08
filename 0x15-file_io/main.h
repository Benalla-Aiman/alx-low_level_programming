#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
void check_argc(int argc);
void open_files(char **argv, int *fd_from, int *fd_to);
void copy_file(int fd_from, int fd_to, char **argv);
void close_files(int fd_from, int fd_to);
int main(int argc, char **argv);

#endif /* MAIN_H */
