#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - variadic functions to sum
 *@n: the constant
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ptr;

		va_start(ptr, n);

		sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}

		va_end(ptr);
		return (sum);
	}
}
