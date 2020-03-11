#include "dog.h"

/**
 * init_dog -initialize a variable of type struct dog.
 * @d: Pointer to the dog structure.
 * @name: Address to Dog name
 * @age: Address to Dog age
 * @owner: Address to Dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
