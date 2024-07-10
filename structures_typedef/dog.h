#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - initialise name, age owner of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: dtruct dog initialize a dog in a structure with 3 parameters:
 * his name
 * his age
 * the name of his owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
#endif
