#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct
 * @d: pointer to element of type dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Description: initializes a variable to type struct dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
