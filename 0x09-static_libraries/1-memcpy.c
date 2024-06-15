#include "main.h"
/**
 * _memcpy - main function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (start);
}
