#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * struct dlistint_t - structure for creation of nodes
 * @n: number who will travel in list
 * @next: pointer to next node
 * @prev: pointeur to previous node
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
