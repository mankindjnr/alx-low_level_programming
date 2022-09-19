#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *print_rev - reverse that string
 *@s: the string
 */
void print_rev(char *s)
{
	int count = 1, i;
	int length = strlen(s);

	for (i = 1; i <= length; i++)
	{
		_putchar(s[length - count]);
		count++;
	}
	_putchar('\n');
}
