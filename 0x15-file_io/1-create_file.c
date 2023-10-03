#include "main.h"
/**
 * create_file - function Create a file
 * @filename: file name to create.
 * @text_content: text to be written
 * Return: as need
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes = write(fd, text_content, strlen(text_content));
		if (bytes != strlen(text_content))
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
