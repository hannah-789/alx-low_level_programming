#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* Check for valid parameters */
    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    /* Get the index for the key using key_index function */
    index = key_index((unsigned char *)key, ht->size);

    /* Traverse the linked list at the index to find the key */
    node = ht->array[index];
    while (node != NULL)
    {
        /* If the key is found, return the associated value */
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

    return NULL; /* Key couldn't be found */
}
