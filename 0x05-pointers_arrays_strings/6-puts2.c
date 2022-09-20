#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *puts2 - print every other character
 *@str: the string to extract from
 */
void puts2(char *str)
{
	int i;
	int count = 0;

	for (i = 0; i < (int)strlen(str); i++)
	{
		printf("%c", str[count]);
		count = count + 2;

		if (count > ((int)strlen(str) - 2))
		{
			break;
		}
	}
	printf("\n");
}
