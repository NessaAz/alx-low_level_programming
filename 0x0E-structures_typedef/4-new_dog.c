#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to a character string representing the dog's name
 * @age: floating-point number representing the dog's age
 * @owner: pointer to a character string representing the dog's owner
 * Return: pointer to the newly created dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_len, owner_len;

    /* Check if name or owner is NULL */
    if (name == NULL || owner == NULL)
        return (NULL);

    /* Calculate the lengths of name and owner */
    name_len = strlen(name);
    owner_len = strlen(owner);

    /* Allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for name copy */
    name_copy = malloc((name_len + 1) * sizeof(char));
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    /* Allocate memory for owner copy */
    owner_copy = malloc((owner_len + 1) * sizeof(char));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }

    /* Copy name and owner to the newly allocated memory */
    strcpy(name_copy, name);
    strcpy(owner_copy, owner);

    /* Set the values of the new dog */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
