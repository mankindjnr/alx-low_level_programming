#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *
 *Return: Always 0
 */
int main(void)
{
	char word[] = "_putchar";
	int len = strlen(word);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
}
