#include "dog.h"
/**
 * free_dog - free dog struct from memeory
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	if (d) {
		free(d->name);
		free(d->owner);
		free(d);
	}
}
