#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to 2 dimensions
 * @width: Column number
 * @height: Row number
 *
 * Return: Array pointer
 */

int **alloc_grid(int width, int height)
{
	int a, j;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(sizeof(int) * width);

		if (output[a] == NULL)
		{
			free(output);
			for (j = 0; j <= height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[a][j] = 0;
	}
	return (output);
}
