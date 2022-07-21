#include "main.h"
/**
* create_file - creates a file
* @filename: name of file
* @text_content: number of letters
* Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (text_content == NULL)
		return (-1);
	while (text_content && text_content[count])
	{
		count++;
	}
	count = write(fd, text_content, count);

	close(fd);
	return (1);
}

