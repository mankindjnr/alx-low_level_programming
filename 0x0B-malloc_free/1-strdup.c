#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - duplicates the string
 *@str: the string to copy
 *Return: pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int n;
	char *result;

	n = strlen(str);

	result = (char *)malloc(n * sizeof(char) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		result = strdup(str);
	}
	return (result);
	free(result);
}
