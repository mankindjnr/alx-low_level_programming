#include "function_pointers.h"

/**
 *array_iterator - executes a function on each element of an array
 *@array: the array with elements to execute
 *@size: size of the array
 *@action: pointer to a function (int) that returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
