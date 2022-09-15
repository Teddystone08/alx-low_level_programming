#include "main.h"
/**
 * alphabet - print in lowcase
 *
 * Description: from the main.h print in lower cases
 *
 * Return: always 0
 *
 */
int print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
