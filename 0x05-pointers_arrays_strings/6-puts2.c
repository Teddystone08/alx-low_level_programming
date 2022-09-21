#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character
 * @str: string
 * Return: alway 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
