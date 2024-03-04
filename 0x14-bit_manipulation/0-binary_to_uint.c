#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number pointer
 * Return: 0 othewise number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int fig;

	i = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		fig = fig << 1;
		if (b[i] == '1')
			fig = fig + 1;
		i++;
	}
	return (fig);
}
