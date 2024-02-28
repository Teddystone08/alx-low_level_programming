#include "main.h"

/**
 * get_bit - function that retuen the value of a bit
 * @index: index from 0
 * @n: value
 * Return: -1 when error else value of bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;
	return (n & 1);
}
