#include "main.h"
/**
 * _strchr - founction that locates a character of strings
 * @s: array
 * @c: char
 * Return: char return
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return ('\0');
}

