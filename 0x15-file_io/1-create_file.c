#include "main.h"

/**
 *create_file - creates a file.
 *@filename: const char type pointer to file
 *@text_content: conteiner
 *Return: 1 on success, -1 on failure.
 */




int create_file(const char *filename, char *text_content)
{
	int fop, size, fwr;


	fop = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fop == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
		size = 0;
	}

	while (text_content[size] != '0')
	{
		size++;
	}

	fwr = write(fop, text_content, size);

	if (fwr == -1)
	{
		return (-1);
	}

	close(fop);
	return (1);
}

