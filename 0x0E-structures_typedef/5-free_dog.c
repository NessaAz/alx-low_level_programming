#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog
 * @d: pointer to the dog to be freed
 */

void free_dog(dog_t *d)
{
    /* Check if d is NULL */
    if (d == NULL)
        return;

    /* Free the memory allocated for name and owner */
    free(d->name);
    free(d->owner);

    /* Free the memory allocated for the dog structure */
    free(d);
}
