#include "main.h"

/**
 * swap_int - function to swap values of two integers
 * *@a: integer a
 * *@b: integer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
