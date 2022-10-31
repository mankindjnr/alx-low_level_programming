#include "main.h"

void print_b(unsigned long int n);

/**
 *print_binary - printing binary
 *@n: the int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}

/**
 *print_b - print binary
 *@n: the int
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;

	print_b((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
        if ((n & 1) == 0)
		_putchar('0');
}
