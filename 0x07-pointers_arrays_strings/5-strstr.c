#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strstr - search for a substring in a bigger string
 *@haystack: the bigger string to scan within
 *@needle: the substring/sequenc to search in the haystack
 *Return: a pointer to t he first occurence of the needle in the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);

	return (ret);
}
