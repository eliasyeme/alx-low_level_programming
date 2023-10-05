#include "hash_tables.h"

/**
	* key_index - gets index of a key
	* @key: the key
	* @size: size of the array of the hashed table
	*
	* Return: index at which key/value pair should be stored
	*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
