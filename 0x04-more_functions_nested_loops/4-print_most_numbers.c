#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: print the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		if (count != 2 &&  count != 4)
		{
			_putchar(count);
		}
		count++;
	}

	_putchar('\n');
}
