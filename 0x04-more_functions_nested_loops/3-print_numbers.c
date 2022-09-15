#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *print_numbers - just numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
