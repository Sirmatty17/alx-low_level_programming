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
	dog_t *p_dog;
	int i, nname, nowner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}
	for (nname = 0; name[nname]; nname++)
		;
	for (nowner = 0; owner[nowner]; nowner++)
		;

	p_dog->name = malloc(nname + 1);
	p_dog->owner = malloc(nowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < nname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';
	p_dog->age = age;

	for (i = 0; i < nowner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}

