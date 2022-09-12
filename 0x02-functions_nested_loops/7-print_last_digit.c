#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 *print_last_digit - last digit for the win
 *@r: the number
 *Return: Always 0
 */
int print_last_digit(int r)
{
	return (r % 10);
}
