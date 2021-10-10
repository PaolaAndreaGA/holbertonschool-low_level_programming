#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table.
 *@ht:the hash table you want to add or update the key
 *@key: is key
 *@value:is the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n, *c;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	i = key_i((const unsigned char *)key, ht->size);
	copy = ht->array[i];
	while (c)
	{
		if (strcmp(c->key, key) == 0)
		{
			c->value = strdup(value);
			return (1);
		}
		c = c->n;
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		return (0);
	}

	n->key = strdup(key);
	n->value = strdup(value);
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}
