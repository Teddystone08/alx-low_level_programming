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
	if (!b)
	{
		return (0);
	}
	for (int i = 0; b[i]; ++i) 
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (int i = strlen(b) - 1; i >= 0; --i) 
	{
		if (b[i] == '1') 
		{
			count += x;
		}
		x *= 2;
	}
	return (count);
}
