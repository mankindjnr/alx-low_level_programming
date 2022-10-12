#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the object
 *@name: dogs name
 *@age: its age
 *@owner: the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
