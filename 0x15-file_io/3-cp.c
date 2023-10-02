#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * frerr - prints error info for source file operations
 * @string: filename
 * Return: none
 */
void clerr(int fd)
{
printf("Error: Can't close fd %i", fd);
exit (100);
}

/**
 * frerr - prints error info for source file operations
 * @string: filename
 * Return: none
 */
void frerr(char *string)
{
printf("Error: Can't read from file %s", string);
exit (98);

}

/**
 * toerr - prints error info for destination file operations
 * @string: filename
 * Return: none
 */
void toerr(char *string)
{
printf("Error: Can't write to %s", string);
exit (99);
}

/**
 * main - custom cp implementation
 *
 * Return: Always 0
 */
int main(int argc, __attribute((unused))char *argv[])
{
int filefr, fileto, ret1, ret2;
char *buf;
ssize_t rd, rw;
rd = 1;
/* wrong argument count */
if (argc != 2)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit (97); }
/* check if file_from is NULLL */
if (argv[1] == NULL)
	frerr(argv[1]);
/*try to open file_from and file_to (source and destination)*/
filefr = open(argv[1], O_RDONLY);
if (filefr == (-1))
	frerr(argv[1]);
/* if file_to exist, truncate, if not create with permission 664 */
fileto = open(argv[2], O_RDWR | O_TRUNC);
if (fileto == (-1))
	{
	fileto = open(argv[2], O_CREAT | O_RDWR, 0664);
	if (fileto == (-1))
		toerr(argv[2]);
	}
/* create a 1024 size buffer to reduce sys calls */
buf = malloc (1024 * sizeof(char));
if (buf == NULL)
	return (0);
/* loop till end of file_to */
while (rd != 0)
	{
	rd = read(filefr, buf, 1024);
	if (rd == (-1))
		frerr(argv[1]);
	rw = write(fileto, buf, 1024);
	if (rw == (-1))
		toerr(argv[1]);
	}
/*close the files*/
ret1 = close(filefr);
if (ret1 == (-1))
	clerr(filefr);
ret2 = close(fileto);
if (ret2 == (-1))
	clerr(fileto);
return (0);
}
