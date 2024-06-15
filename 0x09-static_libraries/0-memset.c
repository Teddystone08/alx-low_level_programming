#include "main.h"

/**
 * _memset - function
 * @s:charcter pointer
 * @b: string
 * @n: integer
 * Return: void
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s;

	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
