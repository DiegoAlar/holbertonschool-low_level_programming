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
	int i = 0, k = 0;
	dog_t *firulais;

	firulais = malloc(sizeof(dog_t));
	if (firulais == NULL)
		return (NULL);
	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	while (name[i++])
	while (owner[k++])
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
	i = 0, k = 0;
	while (name[i])
	{
		firulais->name[i] = name[i];
		i++;
	}
	firulais->name[i] = '\0';
	while (owner[k])
	{
		firulais->owner[k] = owner[k];
		k++;
	}
	firulais->owner[k] = '\0';
	return (firulais);
}
