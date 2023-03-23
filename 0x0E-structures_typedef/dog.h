#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines a dog structure
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the dog's owner
 *
 * Description: struct containing a dog's name, age, and owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* _DOG_H_ */
