#include "main.h"
/**
 * main - function nested loops
 *
 * Description: print out sign of numbers
 *
 * Return: void
 */

int print_sign(int n)
{
	int test;
	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (0);
