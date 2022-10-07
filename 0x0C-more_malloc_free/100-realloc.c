#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *_realloc - reallocating memory using malloc
 *@ptr: the pointer
 *@old_size: initial memory size
 *@new_size: new memory size
 *Return: pointer to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		return (ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size > old_size)
	{
		ptr = malloc(sizeof(ptr) + (new_size - old_size));
	}
	return (ptr);
	free(ptr);
}
