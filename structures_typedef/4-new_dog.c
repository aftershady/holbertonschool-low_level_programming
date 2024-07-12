#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new structure with a pointer by using malloc
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Description: use malloc to allocate memory to a structure
 * Return: the adress of the new pointer on struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
	return (NULL);
}

new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
if (new_dog->name != NULL)
{
	strcpy(new_dog->name, name);
}
else
{
free(new_dog->name);
free(new_dog);
}

new_dog->age = age;

new_dog->owner = malloc(sizeof(char) * strlen(name) + 1);
if (new_dog->owner != NULL)
{
	strcpy(new_dog->owner, owner);
}
else
{
free(new_dog->owner);
free(new_dog);
}

return (new_dog);
}
