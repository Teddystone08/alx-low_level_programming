#include "main.h"

/**
 * print_number - function that print an integer
 * @n: input value
 * Return:return integer
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)

		print_number(num / 10);

	_putchar((num % 10) + '0');
}
