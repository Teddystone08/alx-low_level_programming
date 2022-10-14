#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * op_c - print character
 * @form: name va_list
 * Return: nothing
 */
void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * op_1 - print integer
 * @form: name va_list
 *
 * Return: nothing
 */

void op_i(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * op_f - print float numbers
 * @form: name of va_list
 *
 * Return: nothing
 */
void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}
/**
 * op_s - print string
 * @form: name v_list
 *
 * Return: nothing
 */

void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - check code
 * @format: number of argument passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i, j;
	char *separator = "";

	f ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(all);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
