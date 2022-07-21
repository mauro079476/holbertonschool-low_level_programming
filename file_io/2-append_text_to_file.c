#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of file
* @text_content: number of letters
* Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_APPEND, O_WRONLY);
	if (fd == -1)
		return (-1);

	while (text_content && text_content[count])
			count++;

	write(fd, text_content, count);
	return (1);
}
