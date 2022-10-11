#include <stdlib.h>
#include "dog.h"



/**
 * init_dog - Short description
 * @d: struct to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description a function that initialize a variable of type struct dog
 * Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;

	}
	d->name = name;

	d->age = age;

	d->owner = owner;

}
