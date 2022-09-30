#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: arguments passed
 *Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
