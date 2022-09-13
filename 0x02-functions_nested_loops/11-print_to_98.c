#include <stdio.h>
#include "math.h"
#include <unistd.h>
/**
 *print_to_98 - to 98
 *@n: the start
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);

			if (i < 98)
			{
				printf(", ");
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);

			if (i == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%i\n", n);
	}
}
