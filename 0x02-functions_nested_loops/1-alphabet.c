#include "main.h"
/**
 * alphabet - print in lowcase
 *
 * Description: @ val from the main.h print in lower cases
 *
 * Return: always 0
 *
 */
int print_alphabet(void val)
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
