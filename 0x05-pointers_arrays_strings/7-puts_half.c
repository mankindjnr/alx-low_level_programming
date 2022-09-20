#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *puts_half - prints the second half of the string
 *@str: the string to cut
 */
void puts_half(char *str)
{
	int i;
	int half;

	if ((int)(strlen(str) % 2 == 0))
	{
		half = (int)strlen(str) / 2;
	}
	else
	{
		half = ((int)strlen(str) - 1) / 2;
	}

	for (i = half; i <= (int)strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
