#include "main.h"
/**
 * print_alphabet_x10 - print in lowcase
 *
 * Description: @ val from the main.h print in lower cases
 *
 * Return: always 0
 *
 */

void print_alphabet_x10(void)
{
	int ch = 0;

	while (ch < 10)
	{
		int j = 'a';

		while (j >= 'a' && j <= 'z')
		{
			_putchar(j);
			j++;
		}
		ch++;
		_putchar('\n');
		}
}
