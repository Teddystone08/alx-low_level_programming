#include "main.h"
/**
 * alphabet - print in lowcase
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
	return (0) ;
}
