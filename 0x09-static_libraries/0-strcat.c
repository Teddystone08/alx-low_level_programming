#include "main.h"
/**
 * _strcat - function for char
 * @dest: destination
 * @src: char source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}
