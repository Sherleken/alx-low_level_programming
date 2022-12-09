#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 on success and -1 on failure and -1 if;
 * If the function fails or filename is NULL or if the
 * file does not exist the user lacks write permissions - -1.
 * .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, len, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		wr = write(op, text_content, len);

		if (wr == -1)

			return (-1);
	}

	close(op);

	return (1);
}

