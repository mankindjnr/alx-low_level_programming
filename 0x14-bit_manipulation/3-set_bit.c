#include "main.h"

/**
 *set_bit - set the value of a bit at index
 *@n: the number
 *@index: the index
 *Return: 1 if success -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shift;

	shift = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	shift = shift << index;
	*n = ((*n) | shift);

	return (1);
}
