#include "hash_tables.h"
/**
* hash_table_get - get element
* @ht: hash table
* @key: key
* Return: element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (!key)
		return (NULL);

	if (ht)
	{
		i = key_i((const unsigned char *)key, ht->size);
		temp = ht->array[i];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
