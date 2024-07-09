#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 string in another
 * @s1: string 1
 * @s2: string 2
 * Description: take 2 string and copy char by char
 * Return: null or new_string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array = malloc(sizeof(char));

	if (s1 == NULL && s2 != NULL)
	{
		array = malloc(sizeof(s2));
		for (i = 0; s2[1] != '\0'; i++)
		{
			array[i] = s2[i];
		}
		array[i] = '\0';
	}
	else if (s2 == NULL && s1 != NULL)
	{
		array = malloc(sizeof(s1));
		for (i = 0; s1[1] != '\0'; i++)
		{
			array[i] = s1[i];
		}
		array[i] = '\0';
	}
	else if (s2 == NULL && s1 == NULL)
	{
		return array;
	}
	else
	{
		array = malloc(sizeof(char) * ((sizeof(s1) - 1) + sizeof(s2)));

		for (i = 0; s1[i] != '\0'; i++)
		{
			array[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; i++, j++)
		{
			array[i] = s2[j];
		}
		array[i] = '\0';

		if (array == NULL)
			return (NULL);
	}
	return (array);
}
