#include "main.h"

/**
 * create_file - creates a file and writes in it
 * @filename: file to be created
 * @text_content: content to write in file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wrt = write(op, text_content, strlen(text_content));

	if (op == -1 || wrt == -1)
		return (-1);
	close(op);
	return (1);
}
