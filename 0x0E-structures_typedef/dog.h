#ifndef DOG_H
#define DOG_H
#include "dog.h"

/**
 * struct dog - describes the var of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 */
	struct dog
	{
		char *name;
		float age;
		char owner;
	};
/**
 * dog_t - Typedef for the struct dog
 *
 */
	typedef struct dog dog_t;

	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
}
#endif  /* !defined(PROJECT_MODULE_H) */
