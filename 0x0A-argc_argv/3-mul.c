#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - the entry point
 *@argc: the argument count
 *@argv: the argumnets
 *Return: the multiplication the result
 */
int main(int argc, char *argv[])
{
	int first, second, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);

		result = first * second;

		printf("%d\n", result);
	}
	return (0);
}
