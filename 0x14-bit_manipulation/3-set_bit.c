#include "main.h"

/**
 * set_bit - function that set value of bit
 * @index: index from 0
 * @n: mum
 *
 * Return: 1 if it worked, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 32))
	{
		return (-1);
	}
	*n = *n | (1 << index);

	return (1);
}
