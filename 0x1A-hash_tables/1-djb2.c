#include "hash_tables.h"
/**
 * hash_djb2 - algorithm that generates hash values
 * @str: string
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int k;

	i = 5381;
	while ((k = *str++))
	{
		i = ((i << 5) + i) + k; /* i * 33 + k */
	}
	return (i);
}
