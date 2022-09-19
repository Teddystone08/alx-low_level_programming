#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: parameter
 * Return: return nothing
 */
void print_diagonal(int n)
{
	int dia, space

	if (n > 0)

	for (dia = 0; dia < n; dia++)
	{
		for space = 0; space < dia; space++)
		{
				putchar(' ');
		}
		putchar('\\');

		if (dia == (n - 1))
		{
			continue;
		}
		putchar('\n');
	}
}
putchar('\n');
