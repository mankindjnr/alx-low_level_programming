#include "main.h"
#include <stdlib.h>
/**
 *create_array - creating an array
 *@size: size of the array
 *@c: the character
 *Return: the pointer to the char
 */
char *create_array(unsigned int size, char *c)
{
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (1)
		{
			c = malloc(size * sizeof(char));
			if (c == NULL)
			{
				return (NULL);
			}

			c[0] = 'H';
			i++;
		}
	}
	return (c);
}
