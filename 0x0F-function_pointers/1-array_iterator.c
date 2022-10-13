#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - iterates throught array;
 *@array: the array
 *@size: size of the array
 *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	int n;

	for (i = 0; i < size; i++)
	{
		n = array[i];
		printf("%d", n);
	}
	array[size];
	action(array);
}
