#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: the source
 *@n: n bytes that can be used from src
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
