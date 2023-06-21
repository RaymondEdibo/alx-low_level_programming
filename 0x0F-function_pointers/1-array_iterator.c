#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - check the code
 *@array: int
 *@size: size_t
 *@action: function
 *
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
