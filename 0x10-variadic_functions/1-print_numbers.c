#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_number -function to print numbers
 * @separator: string to be printed between numbers
 * @n: integers passed on the function
 * @...: numbers to be printed
 * Return: always 0
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
