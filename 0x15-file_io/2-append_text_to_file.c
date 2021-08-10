#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: const char type pointer to file
 *@text_content: conteiner
 *Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{


	int fd, fw, size;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	size = 0;
	while (text_content[size])
	{
		size++;
	}

	fw = write(fd, text_content, size);

	if (fw == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
