#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints name, age and owner if not null
 * @d: is pointer to the struct dog.
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %S\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
