#include <stdio.h>
/**
 * main - print all argument passed
 * @argc: number of command line arguments
 * @argv: array name
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; argv[i])
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
