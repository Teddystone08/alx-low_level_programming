#include "main.h"
#include <string.h>
/**
 * _memset - fill memory area with constant.
 * @s: start pointer for memory area
 * @b: constant byte to fill.
 * @n: num bytes
 * Return: pointer to the beginning of memmory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
