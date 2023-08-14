#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the adress to initialize.
 * @name: its name'.
 * @age: its  age'.
 * @owner: The dog owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
