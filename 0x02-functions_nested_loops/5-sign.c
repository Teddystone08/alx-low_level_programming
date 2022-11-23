#include "main.h"
/**
 * print_sign - function nested loops
 * @n: character of numbers and signs
 * Description: print out sign of numbers
 *
 * Return: void
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
