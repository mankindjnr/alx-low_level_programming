#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 *_isalpha - alphabetical check
 *@c: the alphabet
 *Return: Always 0(success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
