#include "main.h"

/**
 * _puts - to print a string to stdout
 * *@str: variable for input
 * Return:no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
