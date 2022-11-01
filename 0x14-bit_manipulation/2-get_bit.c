#include "main.h"

/**
 *get_bit - access the bit at given index
 *@n: the integer number to binary
 *@index: the given index to access
 *Return: the value bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int *arr;
	int size;

	size = 25;

	if (n == 0)
		return (-1);

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	return (arr[index]);

	free(arr);
}
