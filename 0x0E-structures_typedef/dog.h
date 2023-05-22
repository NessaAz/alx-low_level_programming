#if !defined(DOG_H)
#define DOG_H

/**
 * struct dog - represents info about a dog
 * @name: pointer to a character string representing the dog's name
 * @age: pointer to a floating-point number representing the dog's name
 * @owner: pointer to a character string representing the dog's owner
*/

struct dog
{
    char *name;
    float *age;
    char *owner;
};

#endif
