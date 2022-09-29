#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	double n = 254.12;

	double abso = abs(n);

	if (abso == n)
	{
		printf("the are equal\n");
	}
	else
	{
		printf("keep trying\n");
	}
        printf("%d\n", abs(n));
}
