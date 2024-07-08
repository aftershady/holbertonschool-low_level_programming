#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array define in the main
 * @size: size of the array
 * @c: default character
 * Description: malloc the size of char in a array of size with c initialized
 * Return: the array of char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	for (i = 0 ; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
