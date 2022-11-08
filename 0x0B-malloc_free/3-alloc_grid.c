#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a
 *	2 dimensional array of integers
 * @width: first-D array
 * @height: second-D array
 *
 * Return: return alloc a pointer on success.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int p = 0;
	int **alloc;


	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	alloc = malloc(height * sizeof(int));

	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(width * sizeof(int);

		if (alloc[i] == NULL)
		{
			for (; i <= 0; i--)
				free(alloc[i]);
			free(alloc);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (p = 0; p < width; p++)
			alloc[i][p] = 0;
	}
	return (alloc);
}
