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
int nsize = 0;
int osize = 0;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
/*init name*/
while (name[nsize])
{nsize++; }
new_dog->name = malloc(sizeof(char) * nsize + 1);
if (new_dog->name == NULL)
{free(new_dog);
return (NULL); }
else
{
for (i = 0; name[i]; i++)
{new_dog->name[i] = name[i]; }
new_dog->name[i] = '\0'; }
new_dog->age = age;
while (owner[osize])
{osize++; }
new_dog->owner = malloc(sizeof(char) * osize + 1);
if (new_dog->owner == NULL)
{free(new_dog->owner);
free(new_dog);
return (NULL); }
else
{
for (i = 0; owner[i]; i++)
{new_dog->owner[i] = owner[i]; }
new_dog->owner[i] = '\0'; }
return (new_dog);
free(new_dog->name);
	free(new_dog->owner);
	free(new_dog); }
