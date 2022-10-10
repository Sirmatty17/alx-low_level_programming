#ifndef MAIN_H
#define MAIN_H

/**
 * dog_t - typedef of struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog- structure that stores info about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: struct dog stores name, age and owner of the dog
 */

struct dog
{
	char *name;
	int age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

