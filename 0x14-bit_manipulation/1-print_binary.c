#include "main.h"

/**
 * print_binary - prints binary representation of a number.
 * @n: num to be printed
 * Return: void
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		n = n >> 1;
	}
	putchar((n & 1) + '0');
}
