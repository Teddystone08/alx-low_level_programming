#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number being passed
 * Return: 0 if not b is not binary else converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int s  = 0, j = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (s = 0; b[s] != '\0'; s++)
		;
	s--;
	while (s >= 0)
	{
		if ([s] != '0' && b[s] != '1')
			return (0);
		result = result + (b[s] - '0') * (1 << j);
		s--;
		j++;
	}
	return (result);
}
