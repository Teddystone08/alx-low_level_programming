#include <stdio.h>
/**
 * main - program that add positive numbers and prints result
 * @argc: amount of arguments passed
 * @argv: array of arguments
 * Return: sum
 *
 */
int main(int argc, char	*argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (argv[i][j] > 58 || argv[i][j] < 47)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
