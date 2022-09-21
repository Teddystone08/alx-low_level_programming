#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print a string in reversed
 * *@s: string to reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
