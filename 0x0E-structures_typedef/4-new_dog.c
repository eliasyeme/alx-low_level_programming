#include "dog.h"

/**
	* new_dog - create new dog
	* @name: name of the dog
	* @age: age of the dog
	* @owner: owner of the dog
	*
	* Return: pointer new struct of type dog_t
	*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}
