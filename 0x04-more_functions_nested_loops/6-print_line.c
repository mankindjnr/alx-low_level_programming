#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 *print_line - straight
 *@n: how long
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
