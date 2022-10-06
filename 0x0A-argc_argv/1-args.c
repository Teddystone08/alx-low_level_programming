#include <stdio.h>
/**
 * main - prints the name of arguments passed
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
