#include "main.h"
/**
 * palind2 - obtains length od a
 * @a: sting
 * @l: integer to count lenth
 * Return: on success 1
 */
int palind2(char *a, int l)
{
	if (*a == 0)
	{
		return (l - 1);
	}
	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares reverse and string
 * @a: string
 * @l: length
 * Return: on success
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: on success
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
