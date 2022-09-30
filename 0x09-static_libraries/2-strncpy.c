#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 **_strncpy - copies a string
 *@dest: destination
 *@src: the source
 *@n: the number of characters to copy from src to dest
 *Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
