#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: first parameter
 * @s2: second parameter
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
retrun(*s1 - *s2);
}
