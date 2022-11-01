#include "main.h"

/**
 *flip_bits - how many bits i would nedd to flip from one num to another number
 *@n: the first number
 *@m: the second number
 *Return: the number of bits you would need to flip to get another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;

	for (count = 0; result > 0)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
