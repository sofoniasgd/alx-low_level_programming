#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes data
 * @filename: name of new file
 * @text_content: data to be written to disk
 * Return: status of operation
 */

int create_file(const char *filename, char *text_content)
{

/* handle filename */
if (filename == NULL)
	return (0);
}
