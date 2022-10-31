#include "main.h"

/**
 *print_binary - printing a binary
 *@n: the integer
 */
void print_binary(unsigned long int n)
{
	long bno = 0, rem, f = 1;

	while (n != 0)
	{
		rem = (n - (n >> 1) * 2);
		bno = bno + rem * f;
		f = f * 10;
		n = n >> 1;
	}
	printf("%ld", bno);
}
