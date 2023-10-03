#include "main.h"
/**
 * append_text_to_file - function append text to file.
 * @filename: input file.
 * @text_content: the text to add to the file
 * Return: as need.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
