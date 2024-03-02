#include "main.h"

/**
 * print_binary - prints binary representation of a number.
 * @n: num to be printed
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (n > 0)
	{
		putchar('0' + (n & 1));
		n >>= 1;
	}
}
