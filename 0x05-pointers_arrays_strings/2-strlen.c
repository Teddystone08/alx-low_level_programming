#include "main.h"

/**
 * _strlen - return length od string
 * *@s: variable for value
 * Return: return the length value
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
