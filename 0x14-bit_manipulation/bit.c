#include <stdio.h>

int main(void)
{
	int a[10];
	int i;
	int n = 5;

	for (i = 0; n > 0; i++)
	{
		a[i] = i;
		n = n / 2;
		printf("%d  ", n);
	}
	printf("\n");

	for (i = i - 1; i>= 0; i--)
	{
		printf("\n%d", a[i]);
	}
	printf("\n");
	return (0);
}
