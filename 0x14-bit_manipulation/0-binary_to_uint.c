#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned integer
 * @b: binary number pointer
 * Return: converted number, otherwise 0 if char is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
<<<<<<< HEAD
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
=======
	int j = 0;

	if (b == NULL || *b == '\0')
	{
		return (0);
>>>>>>> 1f35db5 (convert num)
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
	count = (count << 1) | (b[j] - '0');

	j++;

	}

	return (count);
}
