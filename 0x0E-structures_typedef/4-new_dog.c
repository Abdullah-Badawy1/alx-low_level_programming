#include "dog.h"

/**
  * new_dog - Creates a new dog instance.
  * @name: Pointer to the new dog's name.
  * @age: Age of the new dog.
  * @owner: Pointer to the owner's name.
  *
  * Description: This function creates
  * a new dog struct and initializes its
  *              members (name, age, owner) based on the provided input.
  *
  * Return: Pointer to the newly created dog struct.
  * Returns NULL if memory
  *         allocation fails for any of the members.
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	i = 0;
	while (name[i])
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->name[i] = '\0';

	new_dog->age = age;

	i = 0;
	while (owner[i])
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	new_dog->owner[i] = '\0';

	return (new_dog);
}
