#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initializing struct dog values
 *@d: the variable dog
 *@name: dogs name
 *@age: its age
 *@owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
