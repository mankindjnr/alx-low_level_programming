#include "search_algos.h"

/**
 *binary_search -  searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: pointer to the first element in the array
 *@size: the number of elements in the array
 *@value: the value to search for
 *Return: the index of the value otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, mid, i;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			printf("%d", array[i]);

			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
