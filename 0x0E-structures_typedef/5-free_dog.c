#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - func
 * @d: pointer to dog of type dog_t
 *
 * Description: frees a dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
