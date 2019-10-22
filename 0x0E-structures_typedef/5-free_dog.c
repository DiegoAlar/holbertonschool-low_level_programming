#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - function that frees dogs.
  * @d: this is the struct of type dog_t to be freed
  *
  *
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
