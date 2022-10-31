#include "main.h"
#include <math.h>

/**
 *binary_to_uint - binary to unsigned integer
 *@b: the string of 0s AND 1s
 *Return: the unsigned integer conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, dec, rem;
	int i, k, j;
	int len = strlen(b);

	dec = 0;
	pow = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (k = 0; k[b] != '\0'; k++)
	{
		rem = b[k] - 48;

		for (j = len - 1; j > 0; j--)
			pow = pow * 2;
		dec = dec + (pow * rem);
		len--;
		pow = 1;
	}
	return (dec);
}
