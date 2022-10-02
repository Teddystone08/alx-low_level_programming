#include "main.h"
/**
 * _pow_recursion - return value of x raised to the power y
 * @x: value to be raise
 * @y: power
 * Return: on success
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
