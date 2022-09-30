#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: arguments
 *Return: the addition
 */
int main(int argc, char *argv[])
{
	int check, i;
	int k, j, length;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			length = strlen(argv[i]);
			for (j = 0; j < length; j++)
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		for (k = 1; k < argc; k++)
		{
			check = atoi(argv[k]);

			sum += check;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
