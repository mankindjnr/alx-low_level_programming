#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strpbrk - finds the first character in the second string matching a in str1
 *@s: the string to scan
 *@accept: string with the character to match
 *Returns: a pointer to the character in str1 that matches a characterin str2
 */
char *_strpbrk(char *s, char *accept)
{
	char *ret;

	ret = strpbrk(s, accept);

	return (ret);
}
