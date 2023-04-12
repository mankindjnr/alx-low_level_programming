#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 *_puts_recursion - function prints a string using recursion
 *@s: the string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
