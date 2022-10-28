#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number (sucess), or 0 (error).
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1;
	int i;

	if (!b)
		return (0);

	for (i = 0; (b[i]; i++)
	{
		if (b[i]  < '0' || b[i] > 0)
			return (0);

			power = 2 * power + (b[i] - '0');
	}

	return (sum);
}
