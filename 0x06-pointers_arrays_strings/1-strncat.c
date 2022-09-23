#include "main.h"
/**
 * _strncat - concatenate two string but add inputted number
 * @dest: sting to be appended
 * @src: strong to be completed at end of dest
 * @n:integer parameter to compare index
 * Return: return the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)

	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;										}
	return (dest);
}
