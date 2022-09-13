#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 *print_last_digit - last digit for the win
 *@r: the number
 *Return: Always 0
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;
	if (last % 10 > 0)
	{
		_putchar(last + '0');
	}
	else if (last == 0)
	{
		last = 0;
		_putchar(last + '0');
	}
	else if (last < 0)
	{
		last = last * -1;
		_putchar(last + '0');
	}
	return (last);
}
