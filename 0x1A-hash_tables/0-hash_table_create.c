#include "hash_tables.h"
/**
* hash_table_create - new hash table
* @size: size of array
* Return: pointer to new table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	new_table->size = size;
	return (new_table);
}
