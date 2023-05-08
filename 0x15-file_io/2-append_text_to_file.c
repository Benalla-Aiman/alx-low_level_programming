#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t n_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
n_written = write(fd, text_content, strlen(text_content));
if (n_written == -1)
return (-1);
}
close(fd);
return (1);
}
