#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *free_dog -let the dog go
 *@d: the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
