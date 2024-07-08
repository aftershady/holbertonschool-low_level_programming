#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string in another memory place
 * @str: string
 * Description: take str, allow same memory size and copy it
 * Return: new string or null
 */
char *_strdup(char *str)
{
	int i;
	char *temp = malloc(sizeof(char) * sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		temp[i] = str[i];
	}
	temp[i] = '\0';

	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);

}
