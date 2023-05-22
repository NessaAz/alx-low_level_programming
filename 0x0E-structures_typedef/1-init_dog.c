#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog with the given values
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to a character string representing the dog's name
 * @age: Floating-point number representing the dog's age
 * @owner: Pointer to a character string representing the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
