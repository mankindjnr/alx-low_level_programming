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
	char *ptr;
	int i;
	unsigned int j, length2;
	int length1;
	int count = 0;

	length1 = strlen(s1);
	length2 = strlen(s2);

	if (s1 == NULL)
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
		/*strncat(s1, s2, n);*/
		for (i = 0; i < length1; i++)
		{
			ptr[i] = s1[i];
			count++;
		}

		for (j = 0; j < length2; j++)
		{
			ptr[count] = s2[j];
			count++;

			if (j == n - 1)
			{
				break;
			}
		}
	}
	return (ptr);

	free(ptr);
}
