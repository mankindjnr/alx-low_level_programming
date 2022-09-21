#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 *cap_string - capitalizing words
 *@str: the string
 *Return: Always 0
 */
char *cap_string(char *str)
{
	int i;
	int x = strlen(str);

	for (i = 1; i < x; i++)
	{
		if (isalpha(str[i]) && str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
