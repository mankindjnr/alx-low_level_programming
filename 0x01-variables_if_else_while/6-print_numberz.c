#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always O
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
