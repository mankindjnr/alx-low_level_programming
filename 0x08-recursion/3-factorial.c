#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *factorial - the factorial function
 *@n: the number to factor
 *Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
	        return (-1);
	}
	else if ( n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
