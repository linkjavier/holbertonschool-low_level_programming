#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Hold listed below variable
 * @name: Address to name
 * @age: Address to age
 * @owner: Address to owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * my_dog - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *ower);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*_DOG_H*/
