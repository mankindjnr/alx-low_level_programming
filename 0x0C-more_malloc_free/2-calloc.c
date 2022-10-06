#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - initialize with o
 *@nmemb: number of elemnts
 *@size: byte size
 *Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(arr, 0, size * nmemb);
	}
	return (arr);
	free(arr);
}
