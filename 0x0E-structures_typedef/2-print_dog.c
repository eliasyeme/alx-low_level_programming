#include "dog.h"

/**
 * print_dog - print dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";
	char *name = d->name ? d->name : nil;
	char *owner = d->owner ? d->name : nil;

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", name);

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", nil);

	printf("Owner: %s\n", owner);
}
