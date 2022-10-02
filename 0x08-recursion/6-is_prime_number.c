#include "main.h"
/**
 * is_prime_number - check is a number is prime
 * prime2 - evatuate from 1 to n
 * @n: number integer
 * @a: as n
 * @b: iterates number from 1 to n
 * Return: on succes
 */
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}

