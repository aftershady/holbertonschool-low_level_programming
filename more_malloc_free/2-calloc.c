#include <stdlib.h>
/**
 * _calloc - create an array, alloc nmeb
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *array;

if(nmemb == 0 || size == 0)
{
	return (NULL);
}

array = malloc(size * nmemb);

for(i = 0; i <= size; i++)
{
	array[i] = '0';
}
return (array);
}
