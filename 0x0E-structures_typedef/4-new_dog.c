#include <stdlib.h>
#include "dog.h"
/**
  * new_dog - function that creates a new dog.
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the owner of the dog
  * Return: a new dog of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, k = 0, q = 0, z = 0;
	dog_t *firulais;

	if (name == NULL || owner == NULL)
		return (NULL);
	firulais = malloc(sizeof(dog_t) + 1);
	if (firulais == NULL)
		return (NULL);
	while (name[i])
		i++;
	while (owner[k])
		k++;
	firulais->name = malloc(sizeof(char) * (i + 1));
	if (firulais->name == NULL)
	{
		free(firulais);
		return (NULL);
	}
	firulais->owner = malloc(sizeof(char) * (k + 1));
	if (firulais->owner == NULL)
	{
		free(firulais->name);
		free(firulais);
		return (NULL);
	}
	firulais->age = age;
	for (; q <= i; q++)
	{
		firulais->name[q] = name[q];
	}
	for (; z <= k; z++)
	{
		firulais->owner[z] = owner[z];
	}
	return (firulais);
}
