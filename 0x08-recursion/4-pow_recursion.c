#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_pow_recursion - the power of a number recursilvely
 *@x: number to be raised
 *@y: the power
 *Return: n raise to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
