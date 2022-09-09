#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always a success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
