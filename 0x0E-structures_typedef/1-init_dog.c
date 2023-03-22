#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: pointer to struct to initialize
 * @name: pointer to name string to set
 * @age: age to set
 * @owner: pointer to owner string to set
 *
 * Return: void
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

