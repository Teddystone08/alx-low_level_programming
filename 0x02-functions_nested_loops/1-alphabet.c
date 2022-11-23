#include "main.h"
/**
 * print_alphabet - print in lowcase
 *
 * Description: @ val from the main.h print in lower cases
 *
 * Return: always 0
 *
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
