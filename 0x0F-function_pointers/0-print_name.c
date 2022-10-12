#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printe names of char
 * @name: name to print
 * @f:fucntion to print with
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
