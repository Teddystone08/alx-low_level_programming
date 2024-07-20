#include "search_algos.h"
/**
 * linear_search - function to define the search
 * @array: pointer to the first elememt
 * @size: is the number of elements in array
 * @value: value to search
 * Return: located value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
