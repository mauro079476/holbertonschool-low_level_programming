#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of table
* Return: Pointer to the new created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;
	unsigned long int i = 0;

	if (size != 0)
	{
		htable = malloc(sizeof(hash_table_t));
		if (!htable)
		{
			return (NULL);
		}
		htable->size = size;
		htable->array = malloc(sizeof(hash_node_t *) * size);

		if (!(htable->array))
		{
			free(htable);
			return (NULL);
		}
		while (i < size)
		{
			htable->array[i] = NULL;
			i++;
		}
		return (htable);
	}
	return (NULL);

}
