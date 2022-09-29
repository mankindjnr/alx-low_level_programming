#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *is_prime_number - primes
 *@n: the number to check
 *Return: Always 0
 */
int is_prime_number(int n)
{
	int check;
	int i;
	int count = 0;

	if (n == 1 || n == -1)
	{
		return (0);
	}
	else
	{
		for (i = 2; i < 10; i++)
		{
			if (i != n)
			{
				check = n % i;

				if (check == 0)
				{
					count++;
				}
			}
			else
			{
				continue;
			}
		}
	}
	if (count != 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
