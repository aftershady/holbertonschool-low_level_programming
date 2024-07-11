#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 string in another, the 2nd have n size
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Description: take 2 string and copy
 * Return: null or new_string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int size_1 = 0;
	unsigned int size_2 = 0;
	char *array;

	if (s1 != NULL)
	{size_1 = (strlen(s1)); }
	else
	{size_1 = 0; }

	if (s2 != NULL)
	{size_2 = (strlen(s2) + 1); }
	else
	{size_2 = 0; }

	if (n > size_2)
	{n = size_2; }

	array = malloc(sizeof(char) * (size_1 + n));

	if (array == NULL)
	{return NULL; }

	if (size_1 != 0)
	{
		for (i = 0; i < size_1; i++)
		{
			array[i] = s1[i];
		}
	}
	if (size_2 != 0)
	{
		for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		{
			array[i] = s2[j];
		}
	}
	array[i] = '\0';
	return (array);
}
