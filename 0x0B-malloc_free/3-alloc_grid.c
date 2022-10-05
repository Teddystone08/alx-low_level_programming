#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 * Return: pointer to the newly allocated 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for  (; i < height; i++)
		{
			array[i] = (int *) malloc(width * sizeof(int));
			if (array[i] != NULL)
			{
				for (i = 0; i < width; i++)
				{
					array[i][j] = 0;
				}
				else
				{
					while (i >= 0)
					{
						free(array[i]);
						i--;
					}
					free(array);
					return (NULL);
				}
			}
			return (array);
		}
		else
		{
			return (null);
		}
	}
}
