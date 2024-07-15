#include <stdio.h>
/**
 * array_iterator - create a loop on function pointer on array
 * @array: array of int
 * @size: size of array
 * Description:
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL)
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
