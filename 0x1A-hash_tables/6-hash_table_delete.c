#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node, *next;

    /* Check for valid hash table */
    if (ht == NULL)
        return;

    /* Traverse each index of the array */
    for (i = 0; i < ht->size; ++i)
    {
        /* Traverse the linked list at each index */
        node = ht->array[i];
        while (node != NULL)
        {
            next = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next;
        }
    }

    /* Free the array and the hash table structure */
    free(ht->array);
    free(ht);
}
