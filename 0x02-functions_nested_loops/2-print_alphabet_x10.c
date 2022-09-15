#include "main.h"
/**
 * alphabet - print in lowcase
 *
 * Description: @ val from the main.h print in lower cases
 *
 * Return: always 0
 *
 */

int print_alphabet_x10(void)
{
	int j, ch;
	ch = 'a';

	while (ch < 10)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(ch);
	}
	ch++;
	_putchar('\n');
	}
	return (0);
}
