#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - checking malloc
 *@b: memory block size
 *Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if  (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	free(ptr);
}
