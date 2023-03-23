#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* function prototypes */
void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);

#endif /* DOG_H */

