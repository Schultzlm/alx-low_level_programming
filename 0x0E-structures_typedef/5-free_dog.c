#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free mem alloc for struct dog
 * @d: struct dog to free
 */

void free_dog(dog_t *d);
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
