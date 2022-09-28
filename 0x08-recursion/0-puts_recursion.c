#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_puts_recursion - recursive function
 *@s: the string
 */
void _puts_recursion(char *s)
{
	int length = strlen(s);
	int i = 0;

	if (i == length)
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
