#include <stdio.h>
#include "dog.h"
/**
  * print_dog - function that prints a struc dog
  * @d: struct as parameter
  */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != 0)
		{
			printf("Name: %s", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}
		printf("\nAge: %.6f\n", d->age);
		if (d->owner != 0)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
