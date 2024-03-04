#include "main.h"

/**
 * flip_bits - function that returns the member of bits
 * @n: integer
 * @m: integer
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, j = 0;

	a = n ^ m;

	while (a > 0)
	{
		if ((a & 1) != 0)
			j++;

		a = a >> 1;
	}
	return (j);
}
