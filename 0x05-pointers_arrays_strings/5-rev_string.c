#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse string
 * *@s: variable as input
 * Return: reverse variable
 *
 */
void rev_string(char *s)
{
	int count = x, y, z;
	char *str, temp;

	while(count >= 0)
	{
		if (*(s[count] == '\0')
		{
			break;
		}
		count++;

	}

	str = s;

	for (y = 0; y < (count - 1); y++)
	{
		for (z = y + 1; z > 0; z--)
		{
			temp = *{str = z);
			*(str + z) = *(str + (z - 1));
			*(str + (z = 1)) = temp;
		}
	}

}
