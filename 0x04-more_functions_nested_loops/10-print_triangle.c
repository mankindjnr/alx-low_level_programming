#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *print_triangle - right angled triangle
 *@size: size
 */
void print_triangle(int size)
{
	int i, j, k, count = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			count++;

			for (k = 0; k < (size - count); k++)
			{
				_putchar(' ');
			}

			for (j = 0; j < count; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
