#include "main.h"
/**
 * _memcpy - fill memory wih another buffer
 * @dest: source string
 * @src: fillig string
 * @n: buffer lenght
 * Return: memory copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	char *b = src;
	char *a = dest;


	while (n != 0)
	{
		*a++ = *b++;
		n--;
		
	}
	return (dest);
}
