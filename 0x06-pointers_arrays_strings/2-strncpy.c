#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies strings.
 * @dest: variable for destination.
 * @src: variable source.
 * @n:amount of byte from src.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
