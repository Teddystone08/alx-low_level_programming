#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number pointer
 * Return: converted number, otherwise 0 if char is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int x = 0;
	unsigned int len;
	int a;

	len = strlen(b);

	for (a = len - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		if (b[a] == '1')
		{
			x += count;
		}
		count *= 2;
	}
	return (x);
}
