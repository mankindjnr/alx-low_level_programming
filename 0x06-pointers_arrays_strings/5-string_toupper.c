#include <unistd.h>
#include <ctype.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *string_toupper - changes lowercase letters to uppercase
 *@str: the string
 *Return: Always 0
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
