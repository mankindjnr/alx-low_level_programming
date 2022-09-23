#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 *rot13 - encoding
 *@str: string
 *Return: ALways 0
 */
char *rot13(char *str)
{
	int i;
	char check;

	int length = strlen(str);
	int count = 0;

	for (i = 0; i < length; i++)
	{
		check = str[i];

		if (isupper(check) && check < 78)
		{
			str[count] = check + 13;
		}
		else if (isupper(check) && check > 77)
		{
			str[count] = check - 13;
		}
		else if (islower(check) && check < 110)
		{
			str[count] = check + 13;
		}
		else if (islower(check) && check > 109)
		{
			str[count] = check - 13;
		}
		else if (!isalpha(check))
		{
			str[count] = check;
		}
		count++;
	}
	return (str);
}
