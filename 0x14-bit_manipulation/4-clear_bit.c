#include "main.h"

/**
 *clear_bit - setting a bit to zero
 *@n: the long integer
 *@index: the position of the bit
 *Return: 1 on success or -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shift;

	shift = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);


	*n = (*n & (~(shift << index)));

	return (-1);
}
