#include "hash_tables.h"

/**
	* new_hash - create new node with key/value pair
	* @key: the key
	* @value: the value
	*
	* Return: pointer to new node or NULL
	*/
hash_node_t *new_hash(const char *key, const char *value)
{

	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		return (NULL);
	}

	new->key = strdup(key);
	if (!new->key)
	{
		free(new->value);
		free(new);
		return (NULL);
	}

	new->next = NULL;
	return (new);
}

/**
 * append - append to a linked list
 * @list: list to append to
 * @node: node to append
 */
void append(hash_node_t *list, hash_node_t *node)
{
	while (1)
	{
		if (list->next == NULL)
		{
			list->next = node;
			break;
		}
		list = list->next;
	}
}

/**
	* hash_table_set - add element to the hash table
	* @ht: hash table to add/update the key/value to
	* @key: the key which can't be empty string
	* @value: value associated with the key
	*
	* Return: 1 on success
	*					0 otherwise
	*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tmp;
	unsigned long idx;
	char *tmp_value;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp_value = strdup(value);
			if (!tmp_value)
				return (0);
			free(tmp->value);
			tmp->value = tmp_value;
			return (1);
		}
		tmp = tmp->next;
	}

	new = new_hash(key, value);
	if (!new)
		return (0);

	if (!ht->array[idx])
	{
		ht->array[idx] = new;
		return (1);
	}

	tmp = ht->array[idx];
	append(tmp, new);

	return (1);
}
