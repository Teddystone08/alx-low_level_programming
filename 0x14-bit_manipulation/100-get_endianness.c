#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 big endian else -1 for little endian.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
