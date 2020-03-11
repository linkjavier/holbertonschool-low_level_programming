#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog.
 * @name: Address to name
 * @age: Address to age
 * @owner: Addres to owner
 * Return: New Dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
