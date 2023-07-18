#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Dog's name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Dog's age: %.1f\n", d->age);
		printf("Dog's owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
