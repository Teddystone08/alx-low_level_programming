#include "main.h"
/**
 * _strncat - concatenate two string but add inputted number
 * @dest: sting to be appended
 * @src: strong to be completed at end of dest
 * @n:integer parameter to compare index
 * Return: return new concated string
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = 0, dest_len = 0;

	while (dest[index])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
