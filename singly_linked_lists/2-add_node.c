#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * strdup - copy a string in a newly allocated string
 * @str: the string to copy
 * Return: the new string allocad with malloc
 */
char* strdup(const char* str)
{
    char* duplicate = malloc(strlen(str) + 1);
    if (duplicate == NULL)
		return NULL;

    strcpy(duplicate, str);
    return duplicate;
}

/**
 * strlen - calculate the number of character in string
 * @str: string
 * Return: end of string - start of string
 */
size_t strlen(const char *str)
{
	const char *s = str;

	while (*s)
	{
	++s;
	}
	return (s - str);
}
/**
 * add_node - create a node
 * @head: pointer on struct pointer
 * @str: string to copy
 * Description: create a node, allocate memory to it and copy in the struct of
 * the node the str and the lenght of the str, make the head point on the new
 * node and the next pointer on the head
 * Return: adresse of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
/*add a new struct*/
list_t *new;

new = malloc(sizeof(list_t));
if (!new)
{
	free(new);
	return (NULL);
}
/*copy data in new struct*/
new->len = strlen(str);
new->str = strdup(str);
/*copy adress of next node in the next pointer*/
new->next = *head;

*head = new;

return (new);
}
