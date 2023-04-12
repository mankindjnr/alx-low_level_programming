#include <stdio.h>
#include "main.h"
#include <unistd.h>

int _strlen_recursion(char *s)
{
	int i;
	if (*s)
		i = (1 + _strlen_recursion(s + 1));

	return (i);
}
