#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integrs
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value we are searching for
 * Return: the index of the value -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
