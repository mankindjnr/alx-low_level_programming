#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *string_nconcat - string concatenation
 *@s1: first string
 *@s2: second string
 *@n: the length of string to copy onto s1 from s2
 *Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *ptr;

	int length1 = strlen(s1);

	if  (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

        ptr = malloc(sizeof(char) * (length1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length1; i++)
		{
			ptr = s1;
			s1++;
		}

		for (j = 0; j < n; j++)
		{
			*ptr = *s2;
			s2++;
			ptr++;
		}
	}
	*ptr = '\0';
	return (ptr);

	free(ptr);
}
