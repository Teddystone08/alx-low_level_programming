#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number pointer
 * Return: 0 othewise number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int x = 0, d = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (x = 0; b[x] != '\0'; x++)
		;
	x--;
	while (x >= 0)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		count += (b[x] - '0') * (1 << d);
		x--;
		d++;
	}
	return (count);
}
