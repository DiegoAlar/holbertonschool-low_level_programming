#ifndef D
#define D
/**
  * struct dog - how to identify dogs
  * @name: the name of a dog
  * @age: age of a dog
  * @owner: owner's name
  * Description: this structs permits identify one dog from another
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
