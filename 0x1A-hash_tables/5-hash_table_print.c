#include "hash_tables.h"
/**
* hash_table_print - prints hash table
* @ht: hash tables
* Return: dictionary with format of hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int k = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp; temp = temp->next)
		{
			if (k)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				k = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
		}
	printf("}\n");
}
