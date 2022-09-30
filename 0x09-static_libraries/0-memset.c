#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 *_memset - fill the memory with a constant byte
 *@s: the void pointer to the block of memory to fill
 *@b: the value to be set
 *@n: the number of bytes to be set to the value
 *Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
