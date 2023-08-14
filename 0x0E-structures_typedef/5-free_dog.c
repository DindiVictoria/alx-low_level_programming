#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for the
 * name and owner strings within the dog structure, and then frees
 * the memory allocated for the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
