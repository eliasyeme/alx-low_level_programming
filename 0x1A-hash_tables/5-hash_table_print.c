#include "hash_tables.h"

/**
	* hash_table_print - print hash table
	* @ht: hash table to print
	*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *tmp;
	unsigned int flag = 0;

	if (!ht)
		return;

	if (!ht->array)
		printf("{}\n");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
