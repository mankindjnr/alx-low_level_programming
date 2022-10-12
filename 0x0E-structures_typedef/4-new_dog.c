#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - create a new dog
 *@name: dogs name
 *@age: dogs age
 *@owner: dog's owner
 *Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->name = strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = strcpy(newDog->owner, owner);

	return (newDog);
}
