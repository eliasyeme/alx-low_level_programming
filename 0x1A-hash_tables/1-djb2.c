#include "hash_tables.h"

/**
	* hash_table_create - hash function using djb2
	* @str: string to hash
	*
	* Return: hash number
	*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
