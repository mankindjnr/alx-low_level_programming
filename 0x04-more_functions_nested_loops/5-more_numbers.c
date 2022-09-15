#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 *more_numbers - more numbes
*/
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
				_putchar(1 + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
