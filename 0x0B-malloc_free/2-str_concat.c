#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *str_concat - concatenation of two strings
 *@s1: string one
 *@s2: string two
 *Return: pointer to the new allocated string
 */
char *str_concat(char *s1, char *s2)
{
	int n, j, i;
	char *str;

	n = strlen(s1) + strlen(s2) + 1;

	str = (char *)malloc(n * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0, j = 0;

		while (s1[i] != '\0')
		{
			str[j] = s1[i];
			i++;
			j++;
		}

		i = 0;

		while (s2[i] != '\0')
		{
			str[j] = s2[i];
			i++;
			j++;
		}
		str[j] = '\0';
	}
	return (str);
	free(str);
}
