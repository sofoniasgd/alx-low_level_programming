#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * clerr - prints error info for source file operations
 * Return: none
 */
void clerr(void)
{
fprintf(stderr, "Error: Can't close fd\n");
exit(100);
}

/**
 * frerr - prints error info for source file operations
 * @string: filename
 * Return: none
 */
void frerr(char *string)
{
fprintf(stderr, "Error: Can't read from file %s\n", string);
exit(98);

}

/**
 * toerr - prints error info for destination file operations
 * @string: filename
 * Return: none
 */
void toerr(char *string)
{
fprintf(stderr, "Error: Can't write to %s\n", string);
exit(99);
}
/**
 * flushbuf - flushes the buffer
 * @buf: buffer pointer
 * Return: none
 */
void flushbuf(char *buf)
{
int i;
for (i = 0; i < 1024; i++)
	*(buf + i) = '\0';
}
/**
 * main - custom cp implementation
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, __attribute((unused))char *argv[])
{
int filefr, fileto;
char *buf;
ssize_t rd = 1, rw;
if (argc != 3)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(97); }
if (argv[1] == NULL)
	frerr(argv[1]);
filefr = open(argv[1], O_RDONLY);
if (filefr == (-1))
	frerr(argv[1]);
fileto = open(argv[2], O_RDWR | O_TRUNC);
if (fileto == (-1))
	{
	fileto = open(argv[2], O_CREAT | O_RDWR, 0664);
	if (fileto == (-1))
		toerr(argv[2]);
	}
buf = malloc(1024 * sizeof(char));
if (buf == NULL)
	return (0);
while (rd != 0)
	{
	flushbuf(buf);
	rd = read(filefr, buf, 1024);
	if (rd == (-1))
		frerr(argv[1]);
	rw = dprintf(fileto, "%s", buf);
	if (rw == (-1))
		toerr(argv[2]);
	if (rd == 0 || rd == (-1))
		break;
	}
if (close(filefr) == (-1) || close(fileto) == (-1))
	clerr();
return (0);
}
