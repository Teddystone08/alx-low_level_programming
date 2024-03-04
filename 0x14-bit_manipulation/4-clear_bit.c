#include "main.h"

/**
 * clear_bit - function that set the value of bit
 * @n: value input
 * @index: value index from 0
 * Return: 1 if successful else -1 failed
 */

int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
