#include "hash_tables.h"
/**
 *hash_table_set - a function that adds an element to a hash table
 *incase of a collision, add the new node at the beginnig of the list
 *@ht: the hash table
 *@key: the new key
 *@value: the new value
 *Return: 1 if successful, 0otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *current;
	unsigned long int hash_index;

	if (ht != NULL || key != NULL || !*key)
		return (0);

	hash_index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[hash_index];
	/*hash_node_t *prev = NULL;*/

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		/*prev = current;*/
		current = current->next;
	}

	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[hash_index];
	ht->array[hash_index] = newnode;

	return (1);
}
