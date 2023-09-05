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
int fd, aw, len;
/* handle filename */
if (filename == NULL)
	return (0);
/* create the file*/
/* to leave the permission of the file unchanged*/
/* first we try just opening with O_RDWR and O_TRUNC */
fd = open(filename, O_RDWR | O_TRUNC);
if (fd == (-1))
	{
	/* this means the file doesnt exist so we use O_CREAT flag*/
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == (-1))
		return (-1);
	}
/* if text_content is NULL, return 1(success) */
if (text_content == NULL)
	return (1);
/* find length of text_content so we can pass to write */
len = 0;
while (*(text_content + len) != '\0')
	len++;
/* write to the file fd */
aw = write(fd, text_content, len);
if (aw == (-1))
	return (-1);
/* close file */
close(fd);
return (1);
}
