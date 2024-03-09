#include "main.h"

/**
 * print_binary - prints binary representation of a number.
 * @n: num to be printed
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int s = 0;
	unsigned long int k = 0;

	while (s <= n && k < 62)
	{
		s = s << 1;
		k++;
	}

	if (k != 62)
		s = s >> 1;

	while (s != 0)
	{
		if ((s & n) != 0)
		{
			k++;
			_putchar('1');
		}
		else
		{
			k++;
			_putchar('0');
		}
		s = s >> 1;
	}
}
