#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int flag = 0;

    /* Check for valid hash table */
    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; ++i)
    {
        /* Traverse the linked list at each index */
        node = ht->array[i];
        while (node != NULL)
        {
            /* Print comma and space if it's not the first element */
            if (flag)
                printf(", ");

            printf("'%s': '%s'", node->key, node->value);

            flag = 1;
            node = node->next;
        }
    }
    printf("}\n");
}
