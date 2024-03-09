#include "main.h"

/**
 * _err - function to check for error code
 * @stat: error code to be checked
 * Return: void
 */
void _err(int stat, ...)
{
	va_list list;

	va_start(list, stat);
	if (stat == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (stat == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(99);
	}
	else if (stat == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(100);
	}
	va_end(list);
}

/**
 * main - main function entry point
 * @argc: number of arguments passed
 * @argv: arguments being passed
 * Return: 98 read err, 99 write err, 100 close err, 0 sucess
 *
 */
int main(int argc, char **argv)
{
	int put, out, put_r, put_w;
	char *buff;

	if (argc != 3)
		_err(97);
	if (argv[1] == NULL)
		_err(98, argv[1]);
	if (argv[2] == NULL)
		_err(99, argv[2]);
	put = open(argv[1], O_RDONLY);
	if (put == -1)
		_err(98, argv[1]);
	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (out == -1)
		_err(99, argv[2]);
	buff = malloc(BUFFSIZE * sizeof(char));
	if (buff == NULL)
		return (1);
	put_r = read(input, buff, BUFFSIZE);
	if (put_r == -1)
		_err(98, argv[1]);
	while (put_r > 0)
	{
		out_w = write(out, buff, put_r);
		if (out_w == -1)
			_err(99, argv[2]);
		put_r = read(put, buff, BUFFSIZE);
		if (put_r == -1)
			_err(98, argv[1]);
	}
	if (close(put) == -1)
		_err(100, put);
	if (close(out) == -1)
		_err(100, out);
	free(buff);
	return (0);
}
