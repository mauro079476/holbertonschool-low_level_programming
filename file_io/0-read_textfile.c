#include "main.h"
/**
* read_textfile - reads a text file and prints it
* @filename: name of file
* @letters: number of letters
* Return: actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	fd = open(filename, O_RDONLY);

	if (buffer == NULL || fd == -1)
		return (0);

	count = read(fd, buffer, letters);
	write(1, buffer, count);

	close(fd);
	return (count);
}
