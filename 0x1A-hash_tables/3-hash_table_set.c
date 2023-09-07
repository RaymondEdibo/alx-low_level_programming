#include "hash_tables.h"
/**
* hash_table_set - add element to table
* @ht: hash table
* @key: key
* @value: value of element
* Return: element added to table
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *temp_value = NULL;
	hash_node_t *temp = NULL, *jk = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temp_value = strdup(value);
	if (!temp_value)
		return (0);
	i = key_i((unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_value;
			temp->value = strdup(value);
			free(temp_value);
			return (1);
		}
		temp = temp->next;
	}
	jk = malloc(sizeof(hash_node_t));
	if (!jk)
	{
		free(jk);
		return (0);
	}
	jk->key = strdup(key);
	jk->value = temp_value;
	jk->next = ht->array[i];
	ht->array[i] = jk;
	return (1);
}
