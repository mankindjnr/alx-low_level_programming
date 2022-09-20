#include <stdio.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
/**
 *rev_string - reverse a string
 *@s: the string
 */
void rev_string(char *s)
{
	int i, j;

	int count = 0;
	char out[10];

	for (i = (int)strlen(s); i >= 0; i--)
	{
		out[count] = s[i];
		count++;
	}

	for (j = 0; j <= (int)strlen(s); j++)
	{
		printf("%c", out[j]);
	}
	printf("\n");
}
