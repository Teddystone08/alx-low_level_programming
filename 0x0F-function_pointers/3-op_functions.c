#include "3-calc.h"

/**
 * op_add - this function add two numbers
 * @a: the first number
 * @b: second number
 * Return: result of th add
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two number
 * @a: first number
 * @b: second number
 * Return: result of sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result multiply
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function divide two numbers
 * @a: first number
 * @b: second number
 * Return: result divide
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - function calculate module
 * @a: first numberr
 * @b: second number
 * Return: result module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
