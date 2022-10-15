#include "3-calc.h"
#include <stdlib>
#include <stdio.h>

/**
 * main - function only
 * @argc: argument comment
 * @argv: argument vectors
 *
 * Return: void
 *
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_fun(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(atoi(argv[i]), atoi(argv[3])));
	return (0);
}
