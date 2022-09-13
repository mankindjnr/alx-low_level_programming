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
	long int sum = 0;

	for (i = 1; i <= 50; i++)
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

		if (fibo[i] > 4000000)
		{
			break;
		}
		else if (fibo[i] % 2 == 0)
		{
			sum = sum + fibo[i];
		}
	}
	printf("%li\n", sum);

	return (0);
}
