#include "main.h"
/**
 * _strchr - function for car
 * @s: string
 * @c: string
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
