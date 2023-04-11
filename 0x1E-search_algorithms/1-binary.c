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
	size_t i;
        int low = 0, mid, j;
	int high = size - 1;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	while (low < high)
	{
		mid = (low + high) / 2;

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
		for (j = mid; j < high; j++)
                {
                        printf("%d", array[j]);

                        if (j < high - 1)
                                printf(", ");
                }
                printf("\n");


	}
	return (-1);
}
