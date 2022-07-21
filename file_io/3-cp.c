#include "main.h"
/**
 * main - point of entry
 * @argv: arguments info
 * @argc: arguments count
 * Return: 99 / 98 / 97
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	exit(0);
}
/**
 * copy_text - copies a text
 * @to: this file
 * @from: this file
*/
void copy_text(const char *from, const char *to)
{
	int file_from, file_to, readmE = 1024, writemE;
	char *cCount[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file_from = open(from, O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	file_to = open(to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	readmE = read(file_from, cCount, 1024);
	if (readmE == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);
	writemE = write(file_to, cCount, readmE);
	if (writemE == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

}
