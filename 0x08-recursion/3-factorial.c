#include "main.h"

/**
 * factorial - calculate the factorial of an int
 * @s: string to be use
 * Return: nothing
 */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
