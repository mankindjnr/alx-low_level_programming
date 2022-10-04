#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *alloc_grid - allocating a grid
 *@width: the width
 *@height: the height
 *Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **grid = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(height * sizeof(int));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return(grid);

	for (i = 0; i < width; i++)
		free(grid[i]);

	free(grid);
}
