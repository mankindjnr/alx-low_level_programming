#include "main.h"
#include <stdlib.h>
/**
 *create_array - creating an array
 *@size: size of the array
 *@c: the character
 *Return: the pointer to the char
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	str = (char*)malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		str[size] = c;
	}
	return (str);
}
