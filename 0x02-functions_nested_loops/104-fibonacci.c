#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int i, j;
	long int fibo[300];
	int count = 0;

	for (i = 1; i <= 98; i++)
	{
		count++;

		if (count > 2)
		{
			fibo[i] = fibo[count - 1] + fibo[count - 2];
		}
		else
		{
			fibo[i] = i;
		}
	}
	for (j = 1; j <= 98; j++)
	{
		printf("%li", fibo[j]);

		if (j < 98)
		{
			printf(", ");
		}
		else
		{
			break;
		}
	}
	printf("\n");
	return (0);
}
