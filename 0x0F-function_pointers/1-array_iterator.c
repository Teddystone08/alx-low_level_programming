#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - to executes a function as a given parameter
 * @size: size of array
 * @action: pointer to the function to use
 * @array: avaible arrays to execute
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
