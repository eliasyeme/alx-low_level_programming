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
	int len_name = 0, len_owner = 0;
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	while (name[len_name])
		len_name++;

	while (name[len_owner])
		len_owner++;

	d = malloc(sizeof(dog_t) + len_owner + len_name + 2);

	if (!d)
	{
		free(d);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
