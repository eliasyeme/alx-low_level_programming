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
	dog_t d;
	dog_t *p = &d;

	if (!name || !owner || age < 0)
		return (NULL);

	d.name = name;
	d.age = age;
	d.owner = owner;

	return (p);
}
