#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strspn - counts the number of matching characters in str2 from str1
 *@s: the string to scan
 *@accpet: the characters to check if they match those in s
 *Return: the number of characters accept that match those in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
