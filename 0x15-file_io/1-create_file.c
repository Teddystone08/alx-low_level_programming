#include "main.h"

/**
 * create_file - function to create file
 * @filename: pointer to the file name to be created
 * @text_content: string to be written in the file
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int put, out, count = 0;

	if (filename == NULL)
		return (-1);
	put = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (put == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (; text_content[count] != '\0'; count++)
		;

	out = write(put, text_content, count);
	if (out == -1 || out != count)
		return (-1);

	close(put);
	return (1);
}
