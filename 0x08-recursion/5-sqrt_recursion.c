#include "main.h"
/**
 * sqrt2 - evaluate from 1 to n
 * @c: same as n
 * @d: iterates from 1 to n
 * Return: on success
 *
 */
int sqrt2(int c, int d)
{
	if (d * d == c)
	{
	return (d);
	}
	else if (d * d > c)
	{
	return (-1);
	}
	return (sqrt2(c, d + 1));
}

/**
 * _sqr_recursion - return a natural square root
 * @n: integer
 * Return: on success
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
