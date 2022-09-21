#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *reverse_array - reversing array elements
 *@a: the array
 *@n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, a2[13];

	for (i = n - 1, j = 0; i > 0; i--, j++)
	{
		a2[j] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = a2[i];
	}
}
