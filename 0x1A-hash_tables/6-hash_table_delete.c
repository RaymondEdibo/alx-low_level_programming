#include "hash_tables.h"
/**
* hash_table_delete - Delete hash table
* @ht: Hash table
* Return: deleted hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *nxt;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp; temp = nxt)
		{
			nxt = temp->nxt;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	free(ht->array);
	free(ht);
}
