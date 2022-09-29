#include <math.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_sqrt_recursion - sqaure root of a number
 *@n: the number
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	double n2 = (double)n;
	double num = sqrt(n2);
	int ab = (int)n2;
	double abso = (double)ab;

	if (n < 0)
	{
		return (-1);
	}
	else if (num != abso)
	{
		return (-1);
	}
	else
	{
		return (num);
	}
}
