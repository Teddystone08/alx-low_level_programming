#include"main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:array
 * @accept: array
 * Return: prefix substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int alpha;
	int pos = 0;

	while (s[pos])
	{
		for (alpha = 0; accept[alpha]; alpha++)
		{
			if (accept[alpha] == s[pos])
			{
				break;
			}
		}
		if (!accept[alpha])
		{
			break;
		}
		pos++;
	}
	return (pos);
}
