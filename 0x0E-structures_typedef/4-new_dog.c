#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - func
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Description: creates a new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nm, ol, i;
	dog_t *dg;

	dg = (dog_t *)malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	nm = ol = 0;
	while (name[nm++])
		;
	while (owner[ol++])
		;
	dg->name = malloc(nm * sizeof(dg->name));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= nm; i++)
		dg->name[i] = name[i];
	dg->age = age;
	dg->owner = malloc(ol * sizeof(dg->owner));
	if (dg->owner == NULL)
	{
		free(dg->name);
		free(dg);
		return (NULL);
	}
	for (i = 0; i <= ol; i++)
		dg->owner[i] = owner[i];
	return (dg);
}
