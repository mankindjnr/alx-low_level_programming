#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 *print_sign - checking for signs
 *@n: the number to check
 *Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
