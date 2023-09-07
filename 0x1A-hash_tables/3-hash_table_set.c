#include "hash_tables.h"
/**
* hash_table_set - add element
* @ht: hash table
* @key: key the element
* @value: value of the element
* Return: element added
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in = 0;
	char *temp_val = NULL;
	hash_node_t *temp = NULL, *new = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temp_val = strdup(value);
	if (!temp_val)
		return (0);
	in = key_index((unsigned char *)key, ht->size);

	/* checks if a collision exists */
	temp = ht->array[in];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_val;
			temp->value = strdup(value);
			free(temp_val);
			return (1);
		}
		temp = temp->next;
	}
	/* If a collision doesn't exits, insert node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = temp_val;
	new->next = ht->array[in];
	ht->array[in] = new;
	return (1);
}
