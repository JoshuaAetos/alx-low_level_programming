#include "dog.h"
#include <stdio.h>
/**
 * init_dog - A function that initializes a varible of type struct dog
 * @d: Struct name
 * @name: name member
 * @age: age member
 * @owner: owner member
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
