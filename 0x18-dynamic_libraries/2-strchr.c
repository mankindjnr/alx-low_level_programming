#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr - searches for the first occurence of the character
 *@c: the character to be searched for
 *@s: the string to scan
 *Return: the pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
