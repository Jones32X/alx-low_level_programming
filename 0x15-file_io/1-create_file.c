#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A points to name of file for creation.
 * @text_content: points to string for writing to file.
 * Return: Failure - -1 else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int foward, W;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	foward = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(foward, text_content, length);

	if (foward == -1 || W == -1)
	{
		return (-1);
	}

	close(foward);
	return (1);
}
