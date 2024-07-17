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
	if (array == Null)
		return (-1);
	for (size_t i = 0; i < size; 1++)
	{
		if (array[i] == value)
			return (i);
		printf("value checked array[%lu] = [%d]\n", array[i]);
	}
	return (-1);
}
