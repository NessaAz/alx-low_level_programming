#ifndef DOG_H
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
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
