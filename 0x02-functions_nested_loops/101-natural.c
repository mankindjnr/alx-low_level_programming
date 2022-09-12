#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0
 */
int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		else
		{
			sum = sum + 0;
		}
	}
	printf("%d\n", sum);
}
