#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - appends data to a file
 * @filename: name of new file
 * @text_content: data to be appended
 * Return: status of operation
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, aw, len;
/* handle filename */
if (filename == NULL)
	return (-1);
/* dont create file if it doesnt exist*/
/* sue append flag */
fd = open(filename, O_EXCL | O_RDWR | O_APPEND);
if (fd == (-1))
	return (-1);
/* if text_content is NULL, return 1(success) */
if (text_content == NULL)
	{
	close(fd);
	return (1); }
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
