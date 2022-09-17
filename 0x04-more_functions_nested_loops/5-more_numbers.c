#include "main.h"

/**
 * more_numbers - emtry point
 *
 * Description: print numbers with _putchar
 * Return: void
 */

void more_numbrs(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 > 9)
			{
				putchar((n2 / 10) + '0');
			}
			putchar((n2 % 10) + '0');
		}
		putchar(10);
	}

