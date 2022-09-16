#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 *
 * Description: Print the alphabet with putchar
 * @c: charater
 * Return: 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
