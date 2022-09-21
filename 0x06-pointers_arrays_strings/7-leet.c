#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *leet - encoding
 *str - string to encode
 *Return: Always 0
 */
char *leet(char *str)
{
	int i;
	int x = strlen(str);

	for (i = 0; i < x; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
