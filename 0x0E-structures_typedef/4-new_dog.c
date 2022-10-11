#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, nname, nowner;

	n_dog = malloc(sizeof(*n_dog));

	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}
	for (nname = 0; name[nname]; nname++)
		;
	for (nowner = 0; owner[nowner]; nowner++)
		;

	n_dog->name = malloc(nname + 1);
	n_dog->owner = malloc(nowner + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < nname; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;

	for (i = 0; i < nname; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';

	return (n_dog);
}

