#include <stdio.h>
/**
 * main - multiples two integer arguments, output and stores
 * @argc: number of command line arguments
 * @argv: array name
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
