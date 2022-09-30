#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_memcpy - copies characters from memory to the memory destination
 *@dest: destination memory
 *@src: source memory
 *@n: number of bytes to be copied
 *Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
