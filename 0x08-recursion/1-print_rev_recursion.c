#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *_print_rev_recursion - reverse the string
 *@s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
