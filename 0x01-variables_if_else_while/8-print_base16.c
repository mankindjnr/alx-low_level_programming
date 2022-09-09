#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
