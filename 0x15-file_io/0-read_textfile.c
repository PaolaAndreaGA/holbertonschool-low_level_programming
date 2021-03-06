#include "main.h"

/**
 * read_textfile - function to read and write a file
 * @filename: const char type pointer to file to be read
 * @letters: size_t type
 * Return: always successful
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr, rd, c;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		return (0);
	}

	c = close(fd);
	if (c == -1)
	{
		return (0);
	}

	return (wr);
}
