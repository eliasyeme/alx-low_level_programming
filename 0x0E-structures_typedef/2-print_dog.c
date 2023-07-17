#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", nil);

	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", nil);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", nil);
}
