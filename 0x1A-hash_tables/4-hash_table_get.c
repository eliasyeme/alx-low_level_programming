#include "hash_tables.h"

/**
	* hash_table_get - retrieves a value associated with a key
	* @ht: hash table to look into
	* @key: key to look for
	*
	* Return: value associated with the key or NULL
	*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *tmp;

	if (!ht || !ht->array || !ht->size || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
