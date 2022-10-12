#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - printing the dog struct
 *@d: the dog var
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (&d->age == NULL)
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
