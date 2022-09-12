#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *_islower - lowrcase check\
 *@c: the argument
 *Return: Always o
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
