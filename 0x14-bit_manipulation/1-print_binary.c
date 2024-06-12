#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char b;
	
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	b = (n & 1) ? '1' : '0';
	putchar(b);
}
