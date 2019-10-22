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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
