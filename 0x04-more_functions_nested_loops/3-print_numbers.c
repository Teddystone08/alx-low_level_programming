#include "main.h"

/**
 * print_numbers - using _putchar twice
 *
 * Description: prints number with _putchar
 *
 * Return: void
 */
void print_number(void)
{
	int fig;

	for (fig = '0'; fig <= '9'; fig++)
	{
		_putchar(fig);
	}
	_putchar('\n');
}
