#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

/**
 * read_textfile - read from text file and writes to standard output
 * @filename: file path
 * @letters: number of elements to write
 * Return: status of the operation
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t ar, aw;
char *buf;
errno = 0;
/* check if filename is NULL */
if (filename == NULL || letters == 0)
	return (0);
/* open file "filename" and handle for error */
fd = open(filename, O_RDONLY);
if (fd == (-1) || errno != 0)
	return (0);
/* create buffer for storing data from read() */
buf = malloc(letters * sizeof(char));
if (buf == NULL)
	return (0);
/* read from file and store in buf, handle error */
ar = read(fd, buf, letters);
if (ar > (ssize_t)letters || ar == (-1))
	return (0);
/* write buffer buf to stdout */
aw = write(STDOUT_FILENO, buf, ar);
if (aw == (-1) || aw > (ssize_t)letters)
	return (0);
/* free buffer and close file */
close(fd);
free(buf);
return (aw);
}
