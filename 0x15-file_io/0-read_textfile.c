#include "main.h"
/**
 * read_textfile - function read a text file and print it
 * @filename: input file.
 * @letters: number of letters to read.
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes1, bytes2;
	char *buff;

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	else
	buff = malloc(sizeof(char) * letters);
	bytes1 = read(fd, buff, letters);
	bytes2 = write(STDOUT_FILENO, buff, bytes1);

	if (bytes1 != bytes2)
		return (0);

	close(fd);
	free(buff);
	return (bytes1);
}
