#include "hash_tables.h"
/**
* hash_table_print - prints hash table
* @ht: hash tables
* Return: dictionary with format of hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int ft = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
		for (temp = ht->array[index]; temp; temp = temp->next)
		{
			if (ft)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				ft = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
		}
	printf("}\n");
}
