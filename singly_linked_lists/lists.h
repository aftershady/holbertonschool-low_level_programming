#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_t - structure of empty node
 * @str: empty pointer for string inclusion
 * @len: number of characters in str
 * @next: pointer on the next node
 */
typedef struct list_t
{
char *str;
unsigned int len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif

