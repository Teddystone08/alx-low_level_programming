#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of string
 *
 * @str: input string.
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (1 % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
