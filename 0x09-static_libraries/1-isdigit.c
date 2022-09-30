#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isdigit - check for numbers
 *@c: the input
 *Return: Always 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
