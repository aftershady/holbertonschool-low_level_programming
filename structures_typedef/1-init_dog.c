#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy - cpy a string in another
 * Description: copy string src into dest[98]
 * @dest: array of char
 * @src: unknown size string
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i = 0;

	while (src[size] != '\0')
	{
		size++;
	}
	while (i != size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * init_dog - take data and initialise a structure dog with name/age/owner
 * @d: initialisation structure of type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: take de caracteristiques of the dog then change it
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
	d->name = "";
	}

	d->owner = malloc(strlen(owner) + 1);
	if (d->name == NULL)
	{
	d->owner = "";
	}
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
}
