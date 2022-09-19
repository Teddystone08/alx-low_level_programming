#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: parameter
 * Return: return nothing
 */
void print_diagonal(int n)
{
	int dia, space;

	dia = 0;

	while (n > 0)
	{
		space = c;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}

		_putchar('\\');
		_putchar('\n');
		dia++;
		n--;
	}
	if (dia < 1)
		_putchar('\n');
}
