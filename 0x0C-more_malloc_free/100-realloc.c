#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function description
 * Description:function that reallocates a memory
 * block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size in bytes of memory llocated space
 * @new_size: new size in bytes of memory to be allocated
 * Return: void pointer to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

	}
	if (new_size == old_size)
	{
		return (ptr);

	}
	free(ptr);

	ptr = malloc(new_size);

	return (ptr);

}
