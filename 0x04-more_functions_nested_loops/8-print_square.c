#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *print_square - equal all sides
 *@size: how big is your square
 */
void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
