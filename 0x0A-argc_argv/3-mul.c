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
	int total = 0;

	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j] == 0 && argv[i][j] != '-')
			{
				printf("Error\n");
				return (i);
			}
		}
	}
	total += atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", total);
		return (0);
}
