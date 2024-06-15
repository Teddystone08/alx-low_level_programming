#include "main.h"
/**
 * _strncpy - function to copy
 * @dest: char
 * @src: char source
 * @n: integer
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest);
}
