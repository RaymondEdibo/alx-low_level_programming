#include "hash_tables.h"
/**
* key_index - gives index of the key
* @key: key
* @size: size
* Return: index key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int fnd;

	fnd = hash_djb2(key);
	return (fnd % size);
}
