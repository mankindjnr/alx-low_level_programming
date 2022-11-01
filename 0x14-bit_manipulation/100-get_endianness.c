#include "main.h"


/**
 *get_endianness - check endianness
 *Return: 1 if little endian 0 if big endiah
 */
int get_endianness(void)
{
	int i;

	i = 1;

	if (*((char *) &i) == 1)
		return (1);
	else
		return (0);
}
