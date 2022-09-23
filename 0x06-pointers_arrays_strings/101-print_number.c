#include "main.h"

/**
 * print_number - function that print an integer
 * @n: input value
 * Return:return integer
 */
void print_number(int n)
{
	unsigned int num; 

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	else if (num / 10)
	{
		print_number(num / 10);
	}

	else
	{
		num = n;
	}
	_putchar((num % 10) + '0');
}
