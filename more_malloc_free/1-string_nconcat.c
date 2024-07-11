#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate 2 string in another, the 2nd have n size
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2
 * Description: take 2 string and copy char by char
 * Return: null or new_string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *array;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	array = malloc(sizeof(char) * (sizeof(s1) - 1) + sizeof(s2));

		if (n > sizeof(s2))
		{
			n = sizeof(s2) + 2;
		}
		for (i = 0; s1[i] != '\0'; i++)
		{
			array[i] = s1[i];
		}
		for (j = 0; j < n; i++, j++)
		{
			array[i] = s2[j];
		}
		array[i] = '\0';

		if (array == NULL)
		{
			return (NULL);
		}
		free(array);

		return (array);
}
