#include "main.h"
#include <stdio.h>
/**
 * more_numbers - entry point
 *
 * Description: print numbers with _putchar
 * Return: void
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				_putchar(n2 / 10 + '0');
				_putchar(n2 / 10 + '0');
			}
		}
		_putchar('\n');

	}
}
