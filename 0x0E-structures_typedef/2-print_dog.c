#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the content of a struct dog
 * @d: pointer to the struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}