#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry point
 *@argc: count the argumnets
 *@argv: the arguments
 *Return: AAlways 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
