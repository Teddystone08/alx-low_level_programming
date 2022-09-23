#include "main.h"

/**
 * string_toupper - lowercase letters of string to uppercase.
 *
 * Description: function that changes all lowercase letters of string
 * to uppercase.
 * @s: String modify
 * Return: nothing
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
