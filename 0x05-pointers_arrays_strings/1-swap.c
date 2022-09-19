#include "main.h"
#include <stdio.h>
/**
 *swap_int 0 swapping integers
 *@a: integer 1
 *@b: integer 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
