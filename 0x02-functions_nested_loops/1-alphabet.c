#include <unistd.h>
#include "main.h"
/**
 *main - entry point
 *
 *Return: Always 0
 */
int main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
