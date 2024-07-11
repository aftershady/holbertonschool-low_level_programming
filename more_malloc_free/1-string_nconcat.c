#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

		if (array == NULL)
		{
			return (NULL);
		}
		if (n > strlen(s2) + 1)
		{
			n = strlen(s2) + 1;
		}

		array = malloc(sizeof(char) * strlen(s1) + n + 1);

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

		return (array);
}
