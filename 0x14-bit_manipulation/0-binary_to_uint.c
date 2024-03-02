#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if b has 1 or more char
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b != NULL || *b == '\0')
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
	result <<= 1;
	result = result + (*b - '0');
	}
	return (result);
}
