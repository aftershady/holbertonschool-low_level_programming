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
int i;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
	return (NULL);
}

new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
if (new_dog->name != NULL)
{
	for (i = 0; name[i]; i++)
	{
		new_dog->name[i] = name[i];
	}
new_dog->name[i] = '\0';
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
	for (i = 0; owner[i]; i++)
	{
		new_dog->owner[i] = owner[i];
	}
new_dog->owner[i] = '\0';
}
else
{
free(new_dog->owner);
free(new_dog);
}

return (new_dog);
}
