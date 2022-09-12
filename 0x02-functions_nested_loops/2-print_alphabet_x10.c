#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - printing alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		if (i <= 9)
		{
			_putchar('\n');
		}
		else
		{
			break;
		}
	}
}
