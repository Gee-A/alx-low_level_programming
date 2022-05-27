#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to fee memory
 * @d: is pointer ot dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
