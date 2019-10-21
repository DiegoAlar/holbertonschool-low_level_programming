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
		if (d->name != 0 && d->age != 0 && d->owner != 0)
		{
			printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
		}
		else if (d->name == 0 && d->age != 0 && d->owner != 0)
		{
			printf("Name: (nil)\nAge: %.6f\nOwner: %s\n", d->age, d->owner);
		}
		else if (d->name != 0 && d->age == 0 && d->owner != 0)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		}
		else if (d->name != 0 && d->age != 0 && d->owner == 0)
		{
			printf("Name: %s\nAge: %.6f\nOwner: (nil)\n", d->name, d->age);
		}
	}
}
