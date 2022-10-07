#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *array_range - array of integers
 *@min: the minimum value:
 *@max: the maximum value
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int count = 0;
	int i, j;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			count++;
		}
	}

	arr = malloc(sizeof(int) * count);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < count; j++)
		{
			arr[j] = min;
			min++;
		}
	}
	return (arr);
	free(arr);
}
